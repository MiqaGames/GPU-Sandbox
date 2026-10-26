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

    return 0;
}