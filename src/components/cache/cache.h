#ifndef CACHE_H
#define CACHE_H

#define CACHE_LINE_WORDS 4
#define CACHE_WAYS 2
#define CACHE_MAX_SETS 128

#include "components/memory/memory.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct{
    uint32_t words[CACHE_LINE_WORDS];
    uint32_t tag;
    bool valid;
} CacheLine;

typedef struct {
    CacheLine ways[CACHE_WAYS];
    uint8_t lru_way;  // least recently used
} CacheSet;

typedef struct{
    uint64_t hits;
    uint64_t misses;
    uint64_t evictions;
} CacheStatistics;

typedef struct{
    CacheSet sets[CACHE_MAX_SETS];
    size_t set_count;
    CacheStatistics stats;
} Cache;

typedef struct{
    size_t set_index;
    uint32_t tag;
    size_t word_offset;
}CacheAddress;

typedef enum{
    CACHE_HIT,
    CACHE_MISS_FREE_WAY,
    CACHE_MISS_EVICTION,
    CACHE_INVALID_INPUT
}CacheLookupResult;


CacheLookupResult cache_probe(Cache *cache, const CacheAddress *address, size_t *way_index);
bool cache_address_decode(const Cache *cache, uint32_t address, CacheAddress *decoded);
bool cache_read_word(Cache *cache, const Memory *memory, uint32_t address, uint32_t *value);
bool cache_init(Cache *cache, size_t set_count);
bool cache_invalidate(Cache *cache, uint32_t address);
bool cache_write_word(Cache *cache, Memory *memory, uint32_t address, uint32_t value);
bool cache_fill(Cache *cache, const Memory *memory, const CacheAddress *address, size_t way_index);
bool cache_fill_words(Cache *cache, const CacheAddress *address, size_t way_index, const uint32_t words[CACHE_LINE_WORDS]);
bool cache_read_word_with_l2(Cache *l1_cache, Cache *l2_cache, const Memory *memory, uint32_t address, uint32_t *value);
bool cache_write_word_with_l2(Cache *l1_cache, Cache *l2_cache, Memory *memory, uint32_t address, uint32_t value);
void cache_reset(Cache *cache);


#endif