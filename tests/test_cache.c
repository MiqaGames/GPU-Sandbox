#include <assert.h>

#include "components/cache/cache.h"
#include "components/memory/memory.h"

int main(){
    Cache cache = {0};
    CacheAddress decoded;
    assert(cache_init(&cache, 32));

    assert(cache_address_decode(&cache, 100, &decoded));
    assert(decoded.set_index == 25);
    assert(decoded.tag == 0);
    assert(decoded.word_offset == 0);

    assert(cache_address_decode(&cache, 102, &decoded));
    assert(decoded.set_index == 25);
    assert(decoded.tag == 0);
    assert(decoded.word_offset == 2);

    assert(cache_address_decode(&cache, 228, &decoded));
    assert(decoded.set_index == 25);
    assert(decoded.tag == 1);
    assert(decoded.word_offset == 0);

    assert(!cache_address_decode(&cache, MEMORY_SIZE, &decoded));

    CacheAddress first;
    CacheAddress second;
    CacheAddress third;
    size_t way;

    assert(cache_address_decode(&cache, 100, &first));
    assert(cache_address_decode(&cache, 228, &second));
    assert(cache_address_decode(&cache, 356, &third));

    assert(first.set_index == second.set_index);
    assert(second.set_index == third.set_index);

    assert(cache_probe(&cache, &first, &way) == CACHE_MISS_FREE_WAY);
    assert(way == 0);
    cache.sets[first.set_index].ways[way].valid = true;
    cache.sets[first.set_index].ways[way].tag = first.tag;

    assert(cache_probe(&cache, &second, &way) == CACHE_MISS_FREE_WAY);
    assert(way == 1);
    cache.sets[second.set_index].ways[way].valid = true;
    cache.sets[second.set_index].ways[way].tag = second.tag;

    assert(cache_probe(&cache, &first, &way) == CACHE_HIT);
    assert(way == 0);
    assert(cache.sets[first.set_index].lru_way == 1);

    assert(cache_probe(&cache, &third, &way) == CACHE_MISS_EVICTION);
    assert(way == 1);

    assert(cache.stats.hits == 1);
    assert(cache.stats.misses == 3);
    assert(cache.stats.evictions == 0);

    static Memory memory = {0};

    cache_reset(&cache);

    memory.data[100] = 11;
    memory.data[101] = 22;
    memory.data[102] = 33;
    memory.data[103] = 44;

    assert(cache_address_decode(&cache, 100, &first));
    assert(cache_probe(&cache, &first, &way) == CACHE_MISS_FREE_WAY);
    assert(way == 0);

    assert(cache_fill(&cache, &memory, &first, way));

    CacheLine *line = &cache.sets[first.set_index].ways[way];
    assert(line->valid);
    assert(line->tag == first.tag);
    assert(line->words[0] == 11);
    assert(line->words[1] == 22);
    assert(line->words[2] == 33);
    assert(line->words[3] == 44);
    assert(cache.stats.evictions == 0);

    memory.data[228] = 51;
    memory.data[229] = 52;
    memory.data[230] = 53;
    memory.data[231] = 54;

    assert(cache_probe(&cache, &second, &way) == CACHE_MISS_FREE_WAY);
    assert(way == 1);
    assert(cache_fill(&cache, &memory, &second, way));
    assert(cache.stats.evictions == 0);

    assert(cache_probe(&cache, &first, &way) == CACHE_HIT);
    assert(way == 0);

    memory.data[356] = 61;
    memory.data[357] = 62;
    memory.data[358] = 63;
    memory.data[359] = 64;

    assert(cache_probe(&cache, &third, &way) == CACHE_MISS_EVICTION);
    assert(way == 1);
    assert(cache_fill(&cache, &memory, &third, way));
    assert(cache.stats.evictions == 1);

    line = &cache.sets[third.set_index].ways[way];
    assert(line->valid);
    assert(line->tag == third.tag);
    assert(line->words[0] == 61);
    assert(line->words[3] == 64);


    memory.data[100] = 11;
    uint32_t value = 0;
    cache_reset(&cache);
    assert(cache_read_word(&cache, &memory, 100, &value));
    assert(value == 11);
    assert(cache_read_word(&cache, &memory, 100, &value));
    assert(value == 11);

    assert(cache.stats.misses == 1);
    assert(cache.stats.hits == 1);
    assert(cache.stats.evictions == 0);

    cache_reset(&cache);
    assert(cache_write_word(&cache, &memory, 100, 77));
    assert(memory.data[100] == 77);
    uint32_t read_back = 0;
    assert(cache_read_word(&cache, &memory, 100, &read_back));
    assert(read_back == 77);
    assert(cache.stats.misses == 1);
    assert(cache.stats.hits == 1);

    uint64_t evictions_before = cache.stats.evictions;
    uint64_t hits_before = cache.stats.hits;
    uint64_t misses_before = cache.stats.misses;
    
    assert(cache_invalidate(&cache, 100));
    
    assert(cache.stats.evictions == evictions_before);
    assert(cache.stats.hits == hits_before);
    assert(cache.stats.misses == misses_before);
    assert(cache_probe(&cache, &first, &way) == CACHE_MISS_FREE_WAY);

    cache_reset(&cache);
    memory.data[100] = 7;
    memory.data[101] = 14;
    memory.data[102] = 21;
    memory.data[103] = 28;
    assert(cache_fill_words(&cache, &first, 0, (const uint32_t[]){7, 14, 21, 28}));
    CacheLine *filled = &cache.sets[first.set_index].ways[0];
    assert(filled->valid);
    assert(filled->tag == first.tag);
    assert(filled->words[0] == 7);
    assert(filled->words[1] == 14);
    assert(filled->words[2] == 21);
    assert(filled->words[3] == 28);
    assert(cache.sets[first.set_index].lru_way == 1);
    assert(cache.stats.evictions == 0);

    cache_reset(&cache);
    evictions_before = cache.stats.evictions;
    assert(!cache_fill_words(&cache, &first, 1, NULL));
    assert(cache.stats.evictions == evictions_before);

    cache_reset(&cache);
    Cache l2_cache = {0};
    CacheAddress l2_addr;
    uint32_t l2_words[CACHE_LINE_WORDS] = {11, 22, 33, 44};
    assert(cache_init(&l2_cache, 64));
    assert(cache_address_decode(&l2_cache, 100, &l2_addr));
    assert(cache_fill_words(&l2_cache, &l2_addr, 0, l2_words));

    uint32_t l1_value = 0;
    assert(cache_read_word_with_l2(&cache, &l2_cache, &memory, 100, &l1_value));
    assert(l1_value == 11);
    assert(cache.stats.misses == 1);
    assert(cache.stats.hits == 0);
    assert(l2_cache.stats.hits == 1);

    return 0;
}