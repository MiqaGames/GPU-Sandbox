#include "components/cache/cache.h"

#include <string.h>
#include <stdlib.h>

bool cache_init(Cache *cache, size_t set_count, size_t way_count, size_t line_words){
    if (cache == NULL || set_count == 0 || way_count < 2 || line_words == 0) return false;
    cache_destroy(cache);
    memset(cache, 0, sizeof(*cache));

    if (set_count > SIZE_MAX / way_count)return false;
    size_t row_count = set_count * way_count;

    if (row_count > SIZE_MAX / line_words) return false;
    size_t word_count = row_count * line_words;

    if (row_count > SIZE_MAX / sizeof(CacheLine) || word_count > SIZE_MAX / sizeof(uint32_t)) return false;
    CacheLine *lines = calloc(row_count, sizeof(CacheLine));
    if (lines == NULL) {
        return false;
    }
    cache->lines = lines;
    uint32_t *words = calloc(word_count, sizeof(uint32_t));
    if (words == NULL) {
        free(cache->lines);
        cache->lines = NULL;
        return false;
    }
    cache->words = words;
    cache->set_count = set_count;
    cache->way_count = way_count;
    cache->line_words = line_words;
    return true;
}

void cache_destroy(Cache *cache){
    if (cache == NULL) return;
    free(cache->lines);
    free(cache->words);
    memset(cache, 0, sizeof(*cache));
    return;
}

bool cache_address_decode(const Cache *cache, uint32_t address, CacheAddress *decoded){
    if (cache == NULL || decoded == NULL || cache->set_count == 0 || cache->line_words == 0) return false;

    uint32_t block_number = address/cache->line_words;
    decoded->set_index = block_number % cache->set_count;
    decoded->tag = (uint32_t)(block_number/cache->set_count);
    decoded->word_offset = address % cache->line_words;
    return true;
}
bool cache_read_word(Cache *cache, const Memory *memory, uint32_t address, uint32_t *value){
    if (cache == NULL || memory == NULL || memory->data == NULL || value == NULL || cache->set_count == 0 || cache->line_words == 0 || cache->way_count < 2 || (size_t)address >= memory->size) return false;
    CacheAddress decoded;
    if (!cache_address_decode(cache, address, &decoded)) return false;
    size_t way_index;

    CacheLookupResult result = cache_probe(cache, &decoded, &way_index);
    if (result == CACHE_HIT) {
        size_t line_index = decoded.set_index * cache->way_count + way_index;
        size_t word_index = line_index * cache->line_words + decoded.word_offset;
        *value = cache->words[word_index];
        return true;
    }

    if (result != CACHE_MISS_FREE_WAY && result != CACHE_MISS_EVICTION) {
        return false;
    }

    if (!cache_fill(cache, memory, &decoded, way_index)) {
        return false;
    }
    size_t line_index = decoded.set_index * cache->way_count + way_index;
    size_t word_index = line_index * cache->line_words + decoded.word_offset;
    *value = cache->words[word_index];
    return true;
}

bool cache_write_word(Cache *cache, Memory *memory, uint32_t address, uint32_t value){
    if (cache == NULL || memory == NULL || memory->data == NULL || cache->set_count == 0 || cache->line_words == 0 || cache->way_count < 2 || (size_t)address >= memory->size) return false;
    CacheAddress decoded;
    if (!cache_address_decode(cache, address, &decoded)) return false;
    size_t way_index;
    CacheLookupResult result = cache_probe(cache, &decoded, &way_index);
    if (result == CACHE_INVALID_INPUT) return false;
    size_t line_index = decoded.set_index * cache->way_count + way_index;
    size_t word_index = line_index * cache->line_words + decoded.word_offset;
    if (result == CACHE_HIT) {
        cache->words[word_index] = value;
        memory->data[address] = value;
        return true;
    }

    if (result != CACHE_MISS_FREE_WAY && result != CACHE_MISS_EVICTION) {
        return false;
    }

    if (!cache_fill(cache, memory, &decoded, way_index)) {
        return false;
    }
    cache->words[word_index] = value;
    memory->data[address] = value;
    return true;
}

bool cache_fill(Cache *cache, const Memory *memory, const CacheAddress *address, size_t way_index){
    if (cache == NULL || memory == NULL || memory->data == NULL || address == NULL || way_index >= cache->way_count || cache->set_count == 0 || cache->line_words == 0 || address->set_index >= cache->set_count || address->word_offset >= cache->line_words) return false;
    uint64_t block_number = (uint64_t)address->tag * cache->set_count + address->set_index;
    uint64_t block_start = block_number * cache->line_words;
    if (block_start >= memory->size || cache->line_words > memory->size - (size_t)block_start) return false;
    uint32_t *words = malloc(cache->line_words * sizeof(uint32_t));
    if (words == NULL) return false;
    for (size_t i = 0; i < cache->line_words; i++){
        words[i] = memory->data[block_start + i];
    }
    bool success = cache_fill_words(cache, address, way_index, words);
    free(words);
    return success;
}

bool cache_invalidate(Cache *cache, uint32_t address){
    if (cache == NULL || cache->set_count == 0 || cache->lines == NULL || cache->way_count < 2) return false;
    CacheAddress decoded;
    if (!cache_address_decode(cache, address, &decoded)) return false;
    for (size_t i = 0; i < cache->way_count; i++){
        size_t line_index = decoded.set_index * cache->way_count+i;
        CacheLine *line = &cache->lines[line_index];
        if (line->valid && line->tag == decoded.tag){
            line->valid = false;
            break;
        }
    }
    return true;
}
bool cache_fill_words(Cache *cache, const CacheAddress *address, size_t way_index, const uint32_t *words){
    if (cache == NULL || address == NULL || way_index >= cache->way_count || cache->set_count == 0 || address->set_index >= cache->set_count || address->word_offset >= cache->line_words || words == NULL || cache->lines == NULL || cache->words == NULL || cache->line_words == 0) return false;
    size_t line_index = address->set_index * cache->way_count + way_index;
    CacheLine *line = &cache->lines[line_index];
    size_t word_index = line_index * cache->line_words;
    for (size_t i = 0; i < cache->line_words; i++){
        cache->words[word_index + i] = words[i];
    }
    cache->stats.evictions += (line->valid == true);
    line->tag = address->tag;
    line->valid = true;
    line->last_used = ++cache->access_clock;
    return true;
}

bool cache_read_word_with_l2(Cache *l1_cache, Cache *l2_cache, const Memory *memory, uint32_t address, uint32_t *value){
    if (l1_cache == NULL || l2_cache == NULL || memory == NULL || memory->data == NULL || value == NULL || (size_t)address >= memory->size) {
        return false;
    }

    CacheAddress l1_addr;
    if (!cache_address_decode(l1_cache, address, &l1_addr)) {
        return false;
    }
    size_t line_start = address - l1_addr.word_offset;
    
    
    size_t l1_way = 0;
    CacheLookupResult l1_result = cache_probe(l1_cache, &l1_addr, &l1_way);
    if (l1_result == CACHE_HIT) {
        size_t line_index = l1_addr.set_index * l1_cache->way_count + l1_way;
        size_t word_index = line_index * l1_cache->line_words + l1_addr.word_offset;
        *value = l1_cache->words[word_index];
        return true;
    }
    if (l1_result != CACHE_MISS_FREE_WAY && l1_result != CACHE_MISS_EVICTION) {
        return false;
    }
    
    uint32_t *words = malloc(l1_cache->line_words * sizeof(*words));
    if (words == NULL) {
        return false;
    }

    for (size_t i = 0; i < l1_cache->line_words; i++) {
        uint32_t current_address = (uint32_t)(line_start + i);
        if (!cache_read_word(l2_cache, memory, current_address, &words[i])) {
            free(words);
            return false;
        }
    }

    bool filled = cache_fill_words(l1_cache, &l1_addr, l1_way, words);
    if (filled) {
        *value = words[l1_addr.word_offset];
    }
    free(words);
    return filled;
}

bool cache_write_word_with_l2(Cache *l1_cache, Cache *l2_cache, Memory *memory, uint32_t address, uint32_t value){
    if (l1_cache == NULL || l2_cache == NULL || memory == NULL || memory->data == NULL || (size_t)address >= memory->size) {
        return false;
    }

    CacheAddress l2_addr;
    if (!cache_address_decode(l2_cache, address, &l2_addr)) {
        return false;
    }

    if (!cache_write_word(l1_cache, memory, address, value)) {
        return false;
    }

    size_t l2_way = 0;
    CacheLookupResult l2_result = cache_probe(l2_cache, &l2_addr, &l2_way);

    if (l2_result == CACHE_HIT) {
        size_t line_index = l2_addr.set_index * l2_cache->way_count + l2_way;
        size_t word_index = line_index * l2_cache->line_words + l2_addr.word_offset;
        l2_cache->words[word_index] = value;
        return true;
    }

    if (l2_result != CACHE_MISS_FREE_WAY && l2_result != CACHE_MISS_EVICTION) {
        return false;
    }

    return cache_fill(l2_cache, memory, &l2_addr, l2_way);
}

void cache_reset(Cache *cache){
    if (cache == NULL || cache->lines == NULL || cache->words == NULL || cache->way_count < 2 || cache->line_words == 0 || cache->set_count == 0) return;
    
    size_t line_count = cache->set_count * cache->way_count;
    size_t word_count = line_count * cache->line_words;
    memset(cache->lines, 0, line_count * sizeof(*cache->lines));
    memset(cache->words, 0, word_count * sizeof(*cache->words));
    cache->stats = (CacheStatistics){0};
    cache->access_clock = 0;
}

CacheLookupResult cache_probe(Cache *cache, const CacheAddress *address, size_t *way_index){
    if (cache == NULL || address == NULL || way_index == NULL || cache->set_count == 0|| address->set_index >= cache->set_count || cache->lines == NULL || cache->way_count < 2) return CACHE_INVALID_INPUT;
    for (size_t i = 0; i < cache->way_count; i++){
        size_t line_index = address->set_index * cache->way_count+i;
        if (cache->lines[line_index].valid == true && cache->lines[line_index].tag == address->tag){
            *way_index = i;
            cache->stats.hits++;
            cache->lines[line_index].last_used = ++cache->access_clock;
            return CACHE_HIT;
        }
        
    }
    cache->stats.misses++;
    for (size_t i = 0; i < cache->way_count; i++){
        size_t line_index = address->set_index * cache->way_count+i;
        if (cache->lines[line_index].valid == false){
            *way_index = i;
            return CACHE_MISS_FREE_WAY;
        }
    }
    size_t lru_index = 0;
    uint64_t oldest = UINT64_MAX;
    for (size_t i = 0; i < cache->way_count; i++){
        size_t line_index = address->set_index * cache->way_count+i;
        if (cache->lines[line_index].last_used < oldest){
            oldest = cache->lines[line_index].last_used;
            lru_index = i;
        }
    }
    *way_index = lru_index;
    return CACHE_MISS_EVICTION;

}