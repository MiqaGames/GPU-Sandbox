#include "simulator.h"

#include <stdio.h>

void submin_task(Simulator *sim){
    if (sim == NULL || sim->tasks == NULL || sim->cores == NULL || sim->core_count == 0) return;
    while (sim->next_task < sim->tasks_count){
        CoreContext *core = find_free_core(sim);
        if (core == NULL) break;
        size_t task_index = sim->next_task++;
        Task *task = &sim->tasks[task_index];
        
        core_reset(&core->core);
        core->task_index = task_index;
        
        for (size_t r = 0; r < REGISTERS_COUNT; r++) {
            core->core.registers[r] = task->core_registers[r];
        }
        
        task->stats = (Statistics){0};
        task->state = WORKING;
        core->task_state = WORKING;
}
}


void run(Simulator *sim) {
    if (sim == NULL || sim->cores == NULL || sim->tasks == NULL || sim->tasks_count == 0 || sim->core_count == 0) {
        printf("Incorrect simulator or task list\n");
        return;
    }
    sim->next_task = 0;
    sim->cycles = 0;
    for (size_t i = 0; i < sim->core_count; i++){
        if (!cache_init(&sim->cores[i].l1_cache, 32)) {
            printf("Failed to initialize L1 cache for core %u\n", (unsigned int)i);
            return;
        }
    }
    if (!cache_init(&sim->l2_cache, 128)) {
        printf("Failed to initialize L2 cache\n");
        return;
    }
    
    while ((find_working_cores(sim) || sim->next_task < sim->tasks_count) && sim->cycles < MAX_CYCLES) {
        submin_task(sim);
        for (size_t i = 0; i < sim->core_count; i++) {
            CoreContext *context = &sim->cores[i];
            if (context->task_state != WORKING) {
                continue;
            }
            
            if (context->task_index >= sim->tasks_count) {
                context->core.current_state = ERROR;
                printf("Incorrect task index");
                context->task_state = FREE;
                continue;
            }
            
            Task *task = &sim->tasks[context->task_index];
            if (task->program.size == 0 || task->program.instructions == NULL) {
                context->task_state = TASK_ERROR;
                context->core.current_state = ERROR;
                task->state = TASK_ERROR;
                context->task_state = FREE;
                continue;
            }
            step_core(context, &task->program, &sim->memory, &sim->l2_cache, &task->stats);
            if (context->task_state != WORKING){
                task->state = context->task_state;
                context->task_state = FREE;
            }
        }
        sim->cycles++;
    }


    if (sim->cycles >= MAX_CYCLES) {
        for (size_t i = 0; i < sim->core_count; i++) {
            CoreContext *context = &sim->cores[i];
            if (context->task_state == WORKING) {
                context->task_state = TASK_TIMEOUT;
                context->core.current_state = TIMEOUT;
                if (context->task_index < sim->tasks_count) {
                    sim->tasks[context->task_index].state = TASK_TIMEOUT;
                }
            }
        }
    }
}

void step_core(CoreContext *context, const Program *program, Memory *memory, Cache *l2_cache, Statistics *stats) {
    if (context == NULL || context->task_state != WORKING) {
        return;
    }
    if (program == NULL || memory == NULL || stats == NULL ||
        (program->size > 0 && program->instructions == NULL)) {
        context->task_state = TASK_ERROR;
        context->core.current_state = ERROR;
        return;
    }
    if (context->core.pc == program->size) {
        context->task_state = DONE;
        return;
    }
    if (context->core.pc > program->size) {
        context->task_state = TASK_ERROR;
        context->core.current_state = ERROR;
        return;
    }

    execute(&context->core, &program->instructions[context->core.pc], memory, &context->l1_cache, l2_cache, program->size, stats);
    stats->instruction_executed++;
    stats->cycles++;

    if (context->core.current_state == ERROR) {
        context->task_state = TASK_ERROR;
    } else if (context->core.current_state == HALT) {
        context->task_state = DONE;
    } else if (context->core.current_state == JUMP) {
        context->core.current_state = NORMAL; 
    } else {
        context->core.pc++;
        if (context->core.pc >= program->size) {
            context->task_state = DONE;
        }
    }
}

CoreContext *find_free_core(Simulator *sim) {
    if (sim == NULL || sim->cores == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < sim->core_count; i++) {
        if (sim->cores[i].task_state == FREE) {
            return &sim->cores[i];
        }
    }
    return NULL;
}

bool find_working_cores(Simulator *sim) {
    if (sim == NULL || sim->cores == NULL) {
        return false;
    }

    for (size_t i = 0; i < sim->core_count; i++) {
        if (sim->cores[i].task_state == WORKING) {
            return true;
        }
    }
    return false;
}
