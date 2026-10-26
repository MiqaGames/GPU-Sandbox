#ifndef CACHE_H
#define CACHE_H

#define CACHE_LINE_WORDS 4
#define CACHE_WAYS 2
#define CACHE_MAX_SETS 128

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
    uint8_t lru_way;  
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
bool cache_init(Cache *cache, size_t set_count);
void cache_reset(Cache *cache);


#endif