#include "config_decoder.h"

#include "external files/cJSON.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static bool read_cache_config(const cJSON *parent, const char *name, CacheConfig *config);
static bool validate_cache_config(const CacheConfig *config);

bool config_load_file(const char *path, SimulatorConfig *config, char *error, size_t error_size) {
    if (error == NULL || error_size == 0) {
        return false;
    }
    if (path == NULL || config == NULL) {
        snprintf(error, error_size, "Invalid arguments to config_load_file");
        return false;
    }

    FILE *file = fopen(path, "rb");
    if (file == NULL) {
        snprintf(error, error_size, "Failed to open file: %s", path);
        return false;
    }

    if (fseek(file, 0, SEEK_END) != 0) {
        fclose(file);
        snprintf(error, error_size, "Failed to seek in file: %s", path);
        return false;
    }
    long file_size = ftell(file);
    if (file_size <= 0 || fseek(file, 0, SEEK_SET) != 0) {
        fclose(file);
        snprintf(error, error_size, "File is empty or unreadable: %s", path);
        return false;
    }

    if ((uintmax_t)file_size >= SIZE_MAX) {
        fclose(file);
        snprintf(error, error_size, "Configuration file is too large: %s", path);
        return false;
    }

    char *json_text = malloc((size_t)file_size + 1);
    if (json_text == NULL) {
        fclose(file);
        snprintf(error, error_size, "Memory allocation failed for JSON text");
        return false;
    }

    size_t bytes_read = fread(json_text, 1, (size_t)file_size, file);
    if (bytes_read != (size_t)file_size) {
        free(json_text);
        fclose(file);
        snprintf(error, error_size, "Failed to read configuration file: %s", path);
        return false;
    }
    json_text[file_size] = '\0';
    fclose(file);

    bool result = config_parse_json(json_text, config, error, error_size);
    free(json_text);
    return result;
}

bool config_parse_json(const char *json_text, SimulatorConfig *config, char *error, size_t error_size) {
    if (error == NULL || error_size == 0) {
        return false;
    }
    if (json_text == NULL || config == NULL) {
        snprintf(error, error_size, "Invalid arguments to config_parse_json");
        return false;
    }

    cJSON *root = cJSON_Parse(json_text);
    if (root == NULL) {
        snprintf(error, error_size, "Failed to parse JSON");
        return false;
    }

    const cJSON *version = cJSON_GetObjectItemCaseSensitive(root, "version");
    const cJSON *cache = cJSON_GetObjectItemCaseSensitive(root, "cache");
    SimulatorConfig parsed = {0};
    bool valid_version = cJSON_IsNumber(version) && version->valuedouble == 1.0;
    bool l1_result = read_cache_config(cache, "l1", &parsed.l1);
    bool l2_result = read_cache_config(cache, "l2", &parsed.l2);

    cJSON_Delete(root);

    if (!valid_version) {
        snprintf(error, error_size, "Unsupported or missing configuration version");
        return false;
    }
    if (!l1_result || !l2_result) {
        snprintf(error, error_size, "Failed to read cache configurations");
        return false;
    }

    if (!validate_cache_config(&parsed.l1)) {
        snprintf(error, error_size, "Invalid L1 cache configuration");
        return false;
    }

    if (!validate_cache_config(&parsed.l2)) {
        snprintf(error, error_size, "Invalid L2 cache configuration");
        return false;
    }

    *config = parsed;
    return true;
}

static bool read_cache_config(const cJSON *parent, const char *name, CacheConfig *config) {
    if (parent == NULL || name == NULL || config == NULL) {
        return false;
    }

    const cJSON *cache_json = cJSON_GetObjectItemCaseSensitive(parent, name);
    if (!cJSON_IsObject(cache_json)) {
        return false;
    }

    const cJSON *sets = cJSON_GetObjectItemCaseSensitive(cache_json, "sets");
    const cJSON *ways = cJSON_GetObjectItemCaseSensitive(cache_json, "ways");
    const cJSON *words_per_line = cJSON_GetObjectItemCaseSensitive(cache_json, "words_per_line");

    if (!cJSON_IsNumber(sets) || !cJSON_IsNumber(ways) || !cJSON_IsNumber(words_per_line) ||
        sets->valuedouble < 1.0 || ways->valuedouble < 1.0 || words_per_line->valuedouble < 1.0 ||
        sets->valuedouble >= (double)SIZE_MAX || ways->valuedouble >= (double)SIZE_MAX ||
        words_per_line->valuedouble >= (double)SIZE_MAX) {
        return false;
    }

    size_t parsed_sets = (size_t)sets->valuedouble;
    size_t parsed_ways = (size_t)ways->valuedouble;
    size_t parsed_words_per_line = (size_t)words_per_line->valuedouble;
    if ((double)parsed_sets != sets->valuedouble ||
        (double)parsed_ways != ways->valuedouble ||
        (double)parsed_words_per_line != words_per_line->valuedouble) {
        return false;
    }

    config->sets = parsed_sets;
    config->ways = parsed_ways;
    config->words_per_line = parsed_words_per_line;

    return true;
}

static bool validate_cache_config(const CacheConfig *config) {
    if (config == NULL) {
        return false;
    }

    if (config->sets == 0 || config->ways < 2 || config->words_per_line == 0) {
        return false;
    }

    return true;
}