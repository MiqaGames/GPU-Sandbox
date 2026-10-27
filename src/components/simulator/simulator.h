#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "components/core/core.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"
#include "components/statistics/statistics.h"
#include "components/cache/cache.h"

#define MAX_CYCLES 1000000




typedef enum{
    FREE,
    WORKING,
    DONE,
    TASK_ERROR,
    TASK_TIMEOUT
} TaskState;

typedef struct {
    const Instruction *instructions;
    size_t size;
} Program;

typedef struct{
    Program program;
    uint32_t core_registers[REGISTERS_COUNT];
    TaskState state;
    Statistics stats;
} Task;

typedef struct {
    TaskState task_state;
    Core core;          // регистры, pc, флаг, состояние выполнения
    size_t task_index;
    Cache l1_cache;      // кэш первого уровня
} CoreContext;

typedef struct {
    CoreContext *cores;
    Task *tasks;
    size_t tasks_count;
    size_t next_task;
    size_t core_count;
    Cache l2_cache;      // кэш второго уровня
    Memory memory;      // общая память
    uint64_t cycles;    // такты всей симуляции
} Simulator;

void run(Simulator *sim);
void step_core(CoreContext *context, const Program *program, Memory *memory, Cache *l2_cache, Statistics *stats);
CoreContext *find_free_core(Simulator *sim);
bool find_working_cores(Simulator *sim);

#endif