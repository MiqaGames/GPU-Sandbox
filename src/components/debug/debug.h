#ifndef DEBUG_H
#define DEBUG_H

#include <stddef.h>
#include <stdio.h>
#include <inttypes.h>

#include "components/instruction/instruction.h"
#include "components/core/core.h"
#include "components/simulator/simulator.h"

void print_registers(const Core *core);
void print_cache_stats(const Cache *cache);
void print_memory_state(const Memory *memory, uint32_t start_address, uint32_t end_address);
void print_flag(const Core *core);
void print_state(const Core *core);
void print_program(const Instruction *program, size_t program_size);
void print_statistics(Statistics stats);
static const char *task_state_name(TaskState state);
static const char *core_state_name(State state);
void print_simulator(const Simulator *sim);
#endif