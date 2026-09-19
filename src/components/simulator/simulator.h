#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <stddef.h>
#include <stdint.h>

#include "components/core/core.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"

#define MAX_CYCLES 1000000

extern int32_t max_cycles;
extern uint32_t cycles;

void run(Core *core, const Instruction *program, size_t program_size, Memory *memory);

#endif