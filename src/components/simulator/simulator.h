#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "components/core/core.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"
#include "components/statistics/statistics.h"

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

typedef struct {
    TaskState task_state;
    Core core;          // регистры, pc, флаг, состояние выполнения
    Statistics stats;   // статистика именно этого ядра
} CoreContext;

typedef struct {
    Program program;
    CoreContext *cores;
    size_t core_count;
    Memory memory;      // общая память
    uint64_t cycles;    // такты всей симуляции
} Simulator;

void run(Simulator *sim);
void step_core(CoreContext *context, const Program *program, Memory *memory);
CoreContext *find_free_core(Simulator *sim);
bool find_working_cores(Simulator *sim);
#endif