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
    uint32_t hits;
    uint32_t misses;
    uint32_t evictions;
} CacheStatistics;

typedef struct{
    CacheSet sets[CACHE_MAX_SETS];
    size_t set_count;
    CacheStatistics stats;
} Cache;


#endif