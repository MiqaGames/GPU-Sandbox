#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "config_decoder.h"

static const char *valid_json =
    "{\"version\":1,\"memory\":{\"size\":65536},\"program\":{\"max_program_size\":256},\"simulation\":{\"max_cycles\":1000000},\"cache\":{" 
    "\"l1\":{\"sets\":32,\"ways\":4,\"words_per_line\":8},"
    "\"l2\":{\"sets\":128,\"ways\":8,\"words_per_line\":16}}}";

static void test_parse_valid_json(void) {
    char error[256] = {0};
    SimulatorConfig config = {0};

    assert(config_parse_json(valid_json, &config, error, sizeof(error)));
    assert(config.l1.sets == 32);
    assert(config.l1.ways == 4);
    assert(config.l1.words_per_line == 8);
    assert(config.l2.sets == 128);
    assert(config.l2.ways == 8);
    assert(config.l2.words_per_line == 16);
    assert(config.memory_size == 65536);
    assert(config.max_program_size == 256);
    assert(config.max_cycles == 1000000);
}

static void test_parse_invalid_json(void) {
    char error[256] = {0};
    SimulatorConfig config = {0};

    assert(!config_parse_json("{invalid json}", &config, error, sizeof(error)));
    assert(error[0] != '\0');

    error[0] = '\0';
    assert(!config_parse_json(
        "{\"version\":2,\"memory\":{\"size\":65536},\"program\":{\"max_program_size\":256},\"simulation\":{\"max_cycles\":1000000},\"cache\":{" 
        "\"l1\":{\"sets\":32,\"ways\":4,\"words_per_line\":8},"
        "\"l2\":{\"sets\":128,\"ways\":8,\"words_per_line\":16}}}",
        &config, error, sizeof(error)));
    assert(strstr(error, "version") != NULL);

    error[0] = '\0';
    assert(!config_parse_json(
        "{\"version\":1,\"memory\":{\"size\":65536},\"program\":{\"max_program_size\":256},\"simulation\":{\"max_cycles\":1000000},\"cache\":{" 
        "\"l1\":{\"sets\":32,\"ways\":1,\"words_per_line\":8},"
        "\"l2\":{\"sets\":128,\"ways\":8,\"words_per_line\":16}}}",
        &config, error, sizeof(error)));
    assert(strstr(error, "L1") != NULL);

    error[0] = '\0';
    assert(!config_parse_json(
        "{\"version\":1,\"memory\":{\"size\":65536},\"program\":{\"max_program_size\":256},\"simulation\":{\"max_cycles\":1000000},\"cache\":{" 
        "\"l1\":{\"sets\":32.5,\"ways\":4,\"words_per_line\":8},"
        "\"l2\":{\"sets\":128,\"ways\":8,\"words_per_line\":16}}}",
        &config, error, sizeof(error)));
    assert(strstr(error, "cache configurations") != NULL);
}

static void test_load_config_file(void) {
    char error[256] = {0};
    SimulatorConfig config = {0};

    if (!config_load_file("src/components/config/config.json", &config, error, sizeof(error))) {
        fprintf(stderr, "Failed to load config file: %s\n", error);
        assert(0);
    }

    assert(config.l1.sets == 32);
    assert(config.l1.ways == 4);
    assert(config.l1.words_per_line == 8);
    assert(config.l2.sets == 128);
    assert(config.l2.ways == 8);
    assert(config.l2.words_per_line == 16);
    assert(config.memory_size == 262144);
    assert(config.max_program_size == 256);
    assert(config.max_cycles == 1000000);
}

int main(void) {
    test_parse_valid_json();
    test_parse_invalid_json();
    test_load_config_file();
    return 0;
}