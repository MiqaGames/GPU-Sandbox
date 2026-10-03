#include "simulator.h"

#include <stdio.h>


void run(Simulator *sim){
    while (find_working_cores(sim) && sim->cycles < MAX_CYCLES){
        for (size_t i = 0; i < sim->core_count; i++){
            CoreContext *context = &sim->cores[i];
            if (context->task_state == WORKING){
                step_core(context, &sim->program, &sim->memory);
            }
        }
        sim->cycles++;
    }
    if (sim->cycles >= MAX_CYCLES){
        for (size_t i = 0; i < sim->core_count; i++){
            if (sim->cores[i].task_state == WORKING){
                sim->cores[i].task_state = TASK_TIMEOUT;
                sim->cores[i].core.current_state = TIMEOUT;
            }
        }
    }
}
void step_core(CoreContext *context, const Program *program, Memory *memory){
    if (context->task_state != WORKING) return;
    if (context->core.pc >= program->size){
        context->task_state = DONE;
        return;
    }
    execute(&context->core, &program->instructions[context->core.pc], memory, program->size, &context->stats);
    context->stats.instruction_executed++;
    context->stats.cycles++;

    if (context->core.current_state == ERROR) {
        context->task_state = TASK_ERROR;
    } 
    else if (context->core.current_state == HALT) {
        context->task_state = DONE;
    } 
    else if (context->core.current_state == JUMP) {
        context->core.current_state = NORMAL; // pc уже выставил execute()
    } 
    else {
        context->core.pc++;
        if (context->core.pc >= program->size){
            context->task_state = DONE;
        }
    }
}
CoreContext *find_free_core(Simulator *sim)
{
    for (size_t i = 0; i < sim->core_count; i++) {
        if (sim->cores[i].task_state == FREE) {
            return &sim->cores[i];
        }
    }
    return NULL; // свободных ядер нет
}
bool find_working_cores(Simulator *sim){
    for (size_t i = 0; i < sim->core_count; i++){
        if (sim->cores[i].task_state == WORKING){
            return true;
        }
    }
    return false;
}
