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
        snprintf(error, error_size, "Invalid arguments to config_load_file"); // он заполняет временный буфер error сообщением об ошибке для передачи обратно вызывающей функции. snprintf используется для безопасного форматирования строки с ограничением размера буфера, чтобы избежать переполнения буфера.
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

    char *json_text = malloc((size_t)file_size + 1); // +1 - под нулевой символ строки '\0', чтобы гарантировать, что строка будет корректно завершена. Это важно для функций, которые ожидают строки C, так как они используют нулевой символ для определения конца строки.
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
    json_text[file_size] = '\0'; // Завершаем строку нулевым символом
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

    cJSON *root = cJSON_Parse(json_text); // Строит дерево JSON из текста для дальнейшего анализа
    /*
    Пример:
    root
    └── memory
        └── size: 262144
    */
    if (root == NULL) {
        snprintf(error, error_size, "Failed to parse JSON");
        return false;
    }

    const cJSON *version = cJSON_GetObjectItemCaseSensitive(root, "version");
    const cJSON *cache = cJSON_GetObjectItemCaseSensitive(root, "cache");
    const cJSON *memory = cJSON_GetObjectItemCaseSensitive(root, "memory");
    const cJSON *memory_size = cJSON_GetObjectItemCaseSensitive(memory, "size");
    const cJSON *program = cJSON_GetObjectItemCaseSensitive(root, "program");
    const cJSON *max_program_size = cJSON_GetObjectItemCaseSensitive(program, "max_program_size");
    const cJSON *simulation = cJSON_GetObjectItemCaseSensitive(root, "simulation");
    const cJSON *max_cycles = cJSON_GetObjectItemCaseSensitive(simulation, "max_cycles");
    SimulatorConfig parsed = {0};
    bool valid_version = cJSON_IsNumber(version) && version->valuedouble == 1.0;
    bool l1_result = read_cache_config(cache, "l1", &parsed.l1);
    bool l2_result = read_cache_config(cache, "l2", &parsed.l2);
    bool valid_memory_size = cJSON_IsNumber(memory_size) &&
        memory_size->valuedouble >= 1.0 && memory_size->valuedouble <= UINT32_MAX;
    if (valid_memory_size) {
        parsed.memory_size = (size_t)memory_size->valuedouble; // valuedouble - это double, поэтому мы проверяем, что значение в пределах допустимого диапазона для size_t, а double оно потому что cJSON использует double для представления чисел в JSON. После проверки мы безопасно приводим его к size_t.
        valid_memory_size = (double)parsed.memory_size == memory_size->valuedouble;
    }
    bool valid_max_program_size = cJSON_IsNumber(max_program_size) &&
        max_program_size->valuedouble >= 1.0 && max_program_size->valuedouble <= UINT32_MAX;
    if (valid_max_program_size) {
        parsed.max_program_size = (size_t)max_program_size->valuedouble;
        valid_max_program_size = (double)parsed.max_program_size == max_program_size->valuedouble;
    }
    bool valid_max_cycles = cJSON_IsNumber(max_cycles) &&
        max_cycles->valuedouble >= 1.0 && max_cycles->valuedouble <= 9007199254740991.0;
    if (valid_max_cycles) {
        parsed.max_cycles = (uint64_t)max_cycles->valuedouble;
        valid_max_cycles = (double)parsed.max_cycles == max_cycles->valuedouble;
    }

    cJSON_Delete(root);

    if (!valid_version) {
        snprintf(error, error_size, "Unsupported or missing configuration version");
        return false;
    }
    if (!valid_memory_size) {
        snprintf(error, error_size, "Invalid or missing memory size in configuration");
        return false;
    }
    if (!valid_max_program_size) {
        snprintf(error, error_size, "Invalid or missing maximum program size in configuration");
        return false;
    }
    if (!valid_max_cycles) {
        snprintf(error, error_size, "Invalid or missing maximum cycle count in configuration");
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

    if (!cJSON_IsNumber(sets) || !cJSON_IsNumber(ways) || !cJSON_IsNumber(words_per_line) || sets->valuedouble < 1.0 || ways->valuedouble < 1.0 || words_per_line->valuedouble < 1.0 || sets->valuedouble >= (double)SIZE_MAX || ways->valuedouble >= (double)SIZE_MAX || words_per_line->valuedouble >= (double)SIZE_MAX) {
        return false;
    }

    size_t parsed_sets = (size_t)sets->valuedouble;
    size_t parsed_ways = (size_t)ways->valuedouble;
    size_t parsed_words_per_line = (size_t)words_per_line->valuedouble;
    if ((double)parsed_sets != sets->valuedouble || (double)parsed_ways != ways->valuedouble || (double)parsed_words_per_line != words_per_line->valuedouble) {
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
