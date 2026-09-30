#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <stddef.h>
#include <stdint.h>

#include "components/core/core.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"

#define MAX_CYCLES 1000000

void run(Core *core, const Instruction *program, size_t program_size, Memory *memory);

typedef struct {
    uint32_t cycles;
    uint32_t instruction_executed;
    
    uint32_t loads;
    uint32_t stores;
    
    uint32_t adds;
    uint32_t subs;
    uint32_t muls;
    uint32_t divs;
    
    uint32_t jumps;
    uint32_t conditional_jumps;
    uint32_t checks;

    uint32_t errors;
} Statistics;

extern Statistics stats;
extern uint32_t max_cycles;

#endif