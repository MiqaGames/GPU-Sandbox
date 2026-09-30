#include "simulator.h"

#include <stdio.h>

uint32_t max_cycles = MAX_CYCLES;

void run(Core *core, const Instruction *program, size_t program_size, Memory *memory){ // инициализация ядра процессора и запуск программы
    stats = (Statistics){0};
    while (core->pc < program_size){
        execute(core, &program[core->pc], memory, program_size);
        stats.instruction_executed++;
        stats.cycles++;
        if (core->current_state == ERROR){
            printf("Error: Invalid instruction at PC = %u\n", core->pc);
            break;
        }
        if (core->current_state == HALT){
            break;
        }
        if (core->current_state == JUMP){
            core->current_state = NORMAL;
        } else {
            core->pc++;
        }
        if (stats.cycles >= max_cycles){
            printf("Timeout: Maximum number of cycles reached\n");
            core->current_state = TIMEOUT;
            break;
        }
    }
}