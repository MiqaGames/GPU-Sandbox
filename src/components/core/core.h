#ifndef CORE_H
#define CORE_H

#include <stdint.h>
#include <stdbool.h>

#define REGISTERS_COUNT 8

typedef enum {
    NORMAL,
    JUMP,
    HALT,
    ERROR,
    TIMEOUT
} State;

typedef enum {
    SAME,
    GREATHER,
    LESS
} Flag;

typedef struct {
    uint32_t registers[REGISTERS_COUNT];
    uint32_t pc;
    State current_state;
    Flag flag;
} Core;

void core_reset(Core *core);

#endif