#ifndef BUILDER_H
#define BUILDER_H

#include "components/debug/debug.h"
#include "components/core/core.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"
#include "components/simulator/simulator.h"

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))

#define _GET_FOUR_ARG(_1, _2, _3, _4, ...) _4
#define task_create(...) _GET_FOUR_ARG(__VA_ARGS__, task_create_with_state, task_create_default, task_create_invalid)(__VA_ARGS__)

#ifdef task_create_invalid
#error "task_create requires either 2 or 3 arguments"
#endif

Task task_create_default(const Instruction *instructions, size_t instruction_count);
Task task_create_with_state(const Instruction *instructions, size_t instruction_count, TaskState state);


void task_set_register(Task *task, size_t register_index, uint32_t value);
void simulator_configure(Simulator *simulator, CoreContext *cores, size_t core_count, Task *tasks, size_t task_count);
void memory_load_words(Memory *memory, uint32_t start_address, const uint32_t *values, size_t count);

#endif