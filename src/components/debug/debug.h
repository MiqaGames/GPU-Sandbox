#ifndef DEBUG_H
#define DEBUG_H

#include <stddef.h>
#include <stdio.h>
#include <inttypes.h>

#include "components/instruction/instruction.h"
#include "components/core/core.h"
#include "components/simulator/simulator.h"

void print_registers(const Core *core);
void print_state(const Core *core);
void print_program(const Instruction *program, size_t program_size);
void print_statistics(Statistics stats);

#endif