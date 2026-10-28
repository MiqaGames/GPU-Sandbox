#include "components/cache/cache.h"

#include <string.h>

bool cache_init(Cache *cache, size_t set_count){
    if (cache == NULL || set_count == 0 || set_count > CACHE_MAX_SETS) return false;
    memset(cache, 0, sizeof(*cache));
    cache->set_count = set_count;
    return true;
}

bool cache_address_decode(const Cache *cache, uint32_t address, CacheAddress *decoded){
    if (cache == NULL || decoded == NULL || cache->set_count > CACHE_MAX_SETS || cache->set_count == 0 || address >= MEMORY_SIZE) return false;

    uint32_t block_number = address/CACHE_LINE_WORDS;
    decoded->set_index = block_number % cache->set_count;
    decoded->tag = (uint32_t)(block_number/cache->set_count);
    decoded->word_offset = address % CACHE_LINE_WORDS;
    return true;
}
bool cache_read_word(Cache *cache, const Memory *memory, uint32_t address, uint32_t *value){
    if (cache == NULL || memory == NULL || value == NULL || cache->set_count > CACHE_MAX_SETS || cache->set_count == 0 || address >= MEMORY_SIZE) return false;
    CacheAddress decoded;
    if (!cache_address_decode(cache, address, &decoded)) return false;
    size_t way_index;
    CacheLookupResult result = cache_probe(cache, &decoded, &way_index);
    if (result == CACHE_HIT) {
        *value = cache->sets[decoded.set_index].ways[way_index].words[decoded.word_offset];
        return true;
    }

    if (result != CACHE_MISS_FREE_WAY && result != CACHE_MISS_EVICTION) {
        return false;
    }

    if (!cache_fill(cache, memory, &decoded, way_index)) {
        return false;
    }
    *value = cache->sets[decoded.set_index].ways[way_index].words[decoded.word_offset];
    return true;
}

bool cache_write_word(Cache *cache, Memory *memory, uint32_t address, uint32_t value){
    if (cache == NULL || memory == NULL || cache->set_count > CACHE_MAX_SETS || cache->set_count == 0 || address >= MEMORY_SIZE) return false;
    CacheAddress decoded;
    if (!cache_address_decode(cache, address, &decoded)) return false;
    size_t way_index;
    CacheLookupResult result = cache_probe(cache, &decoded, &way_index);
    if (result == CACHE_HIT) {
        cache->sets[decoded.set_index].ways[way_index].words[decoded.word_offset] = value;
        memory->data[address] = value;
        return true;
    }

    if (result != CACHE_MISS_FREE_WAY && result != CACHE_MISS_EVICTION) {
        return false;
    }

    if (!cache_fill(cache, memory, &decoded, way_index)) {
        return false;
    }
    cache->sets[decoded.set_index].ways[way_index].words[decoded.word_offset] = value;
    memory->data[address] = value;
    return true;
}

bool cache_fill(Cache *cache, const Memory *memory, const CacheAddress *address, size_t way_index){
    if (cache == NULL || memory == NULL || address == NULL || way_index >= CACHE_WAYS || cache->set_count > CACHE_MAX_SETS || address->set_index >= cache->set_count || address->word_offset >= CACHE_LINE_WORDS || cache->set_count == 0) return false;
    uint64_t block_number = (uint64_t)address->tag * cache->set_count + address->set_index;
    uint64_t block_start = block_number * CACHE_LINE_WORDS;
    if (block_start + CACHE_LINE_WORDS > MEMORY_SIZE){
        return false;
    }
    uint32_t words[CACHE_LINE_WORDS];
    for (size_t i = 0; i < CACHE_LINE_WORDS; i++){
        words[i] = memory->data[block_start + i];
    }
    return cache_fill_words(cache, address, way_index, words);
}

bool cache_invalidate(Cache *cache, uint32_t address){
    if (cache == NULL || cache->set_count > CACHE_MAX_SETS || cache->set_count == 0 || address >= MEMORY_SIZE) return false;
    CacheAddress decoded;
    if (!cache_address_decode(cache, address, &decoded)) return false;
    CacheSet*set = &cache->sets[decoded.set_index];
    for (size_t i = 0; i < CACHE_WAYS; i++){
        if (set->ways[i].valid && set->ways[i].tag == decoded.tag){
            set->ways[i].valid = false;
            break;
        }
    }
    return true;
}
bool cache_fill_words(Cache *cache, const CacheAddress *address, size_t way_index, const uint32_t words[CACHE_LINE_WORDS]){
    if (cache == NULL || address == NULL || way_index >= CACHE_WAYS || cache->set_count > CACHE_MAX_SETS || address->set_index >= cache->set_count || address->word_offset >= CACHE_LINE_WORDS || words == NULL || cache->set_count == 0) return false;
    CacheLine *line = &cache->sets[address->set_index].ways[way_index];
    for (size_t i = 0; i < CACHE_LINE_WORDS; i++){
        line->words[i] = words[i];
    }
    cache->stats.evictions += (line->valid == true);
    line->tag = address->tag;
    line->valid = true;
    cache->sets[address->set_index].lru_way = 1 - way_index;
    return true;
}

bool cache_read_word_with_l2(Cache *l1_cache, Cache *l2_cache, const Memory *memory, uint32_t address, uint32_t *value){
    if (l1_cache == NULL || l2_cache == NULL || memory == NULL || value == NULL || address >= MEMORY_SIZE) {
        return false;
    }

    CacheAddress l1_addr;
    if (!cache_address_decode(l1_cache, address, &l1_addr)) {
        return false;
    }

    size_t l1_way = 0;
    CacheLookupResult l1_result = cache_probe(l1_cache, &l1_addr, &l1_way);
    if (l1_result == CACHE_HIT) {
        *value = l1_cache->sets[l1_addr.set_index].ways[l1_way].words[l1_addr.word_offset];
        return true;
    }
    if (l1_result != CACHE_MISS_FREE_WAY && l1_result != CACHE_MISS_EVICTION) {
        return false;
    }

    CacheAddress l2_addr;
    if (!cache_address_decode(l2_cache, address, &l2_addr)) {
        return false;
    }

    size_t l2_way = 0;
    CacheLookupResult l2_result = cache_probe(l2_cache, &l2_addr, &l2_way);
    if (l2_result == CACHE_HIT) {
        uint32_t words[CACHE_LINE_WORDS];
        for (size_t i = 0; i < CACHE_LINE_WORDS; i++) {
            words[i] = l2_cache->sets[l2_addr.set_index].ways[l2_way].words[i];
        }
        if (!cache_fill_words(l1_cache, &l1_addr, l1_way, words)) {
            return false;
        }
        *value = l1_cache->sets[l1_addr.set_index].ways[l1_way].words[l1_addr.word_offset];
        return true;
    }
    if (l2_result != CACHE_MISS_FREE_WAY && l2_result != CACHE_MISS_EVICTION) {
        return false;
    }

    if (!cache_fill(l2_cache, memory, &l2_addr, l2_way)) {
        return false;
    }

    uint32_t words[CACHE_LINE_WORDS];
    for (size_t i = 0; i < CACHE_LINE_WORDS; i++) {
        words[i] = l2_cache->sets[l2_addr.set_index].ways[l2_way].words[i];
    }

    if (!cache_fill_words(l1_cache, &l1_addr, l1_way, words)) {
        return false;
    }

    *value = l1_cache->sets[l1_addr.set_index].ways[l1_way].words[l1_addr.word_offset];
    return true;
}

bool cache_write_word_with_l2(Cache *l1_cache, Cache *l2_cache, Memory *memory, uint32_t address, uint32_t value){
    if (l1_cache == NULL || l2_cache == NULL || memory == NULL || address >= MEMORY_SIZE) {
        return false;
    }

    if (!cache_write_word(l1_cache, memory, address, value)) {
        return false;
    }

    CacheAddress l2_addr;
    if (!cache_address_decode(l2_cache, address, &l2_addr)) {
        return false;
    }

    size_t l2_way = 0;
    CacheLookupResult l2_result = cache_probe(l2_cache, &l2_addr, &l2_way);
    if (l2_result == CACHE_HIT) {
        l2_cache->sets[l2_addr.set_index].ways[l2_way].words[l2_addr.word_offset] = value;
        return true;
    }
    if (l2_result != CACHE_MISS_FREE_WAY && l2_result != CACHE_MISS_EVICTION) {
        return false;
    }

    if (!cache_fill(l2_cache, memory, &l2_addr, l2_way)) {
        return false;
    }
    l2_cache->sets[l2_addr.set_index].ways[l2_way].words[l2_addr.word_offset] = value;
    return true;
}

void cache_reset(Cache *cache){
    if (cache == NULL || cache->set_count > CACHE_MAX_SETS || cache->set_count == 0){
        return;
    }
    size_t set_count = cache->set_count;
    memset(cache, 0, sizeof(*cache));
    cache->set_count = set_count;
}

CacheLookupResult cache_probe(Cache *cache, const CacheAddress *address, size_t *way_index){
    if (cache == NULL || address == NULL || way_index == NULL || cache->set_count == 0|| cache->set_count > CACHE_MAX_SETS || address->set_index >= cache->set_count || cache->sets[address->set_index].lru_way >= CACHE_WAYS) return CACHE_INVALID_INPUT;
    CacheSet *set = &cache->sets[address->set_index];
    for (size_t i = 0; i < CACHE_WAYS; i++){
        if (set->ways[i].valid == true && set->ways[i].tag == address->tag){
            *way_index = i;
            cache->stats.hits++;
            set->lru_way = 1-i;
            return CACHE_HIT;
        }
        
    }
    cache->stats.misses++;
    for (size_t i = 0; i < CACHE_WAYS; i++){
        if (set->ways[i].valid == false){
            *way_index = i;
            return CACHE_MISS_FREE_WAY;
        }
    }
    *way_index = set->lru_way;
    return CACHE_MISS_EVICTION;

}