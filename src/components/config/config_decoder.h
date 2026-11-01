#ifndef CONFIG_DECODER_H
#define CONFIG_DECODER_H

#include <stddef.h>
#include <stdbool.h>


typedef struct{
    size_t sets;
    size_t ways;
    size_t words_per_line;
} CacheConfig;

typedef struct{
    CacheConfig l1;
    CacheConfig l2;
} SimulatorConfig;

bool config_load_file(const char *path, SimulatorConfig *config, char *error, size_t error_size);
bool config_parse_json(const char *json_text, SimulatorConfig *config, char *error, size_t error_size);

#endif