#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "components/debug/debug.h"
#include "components/core/core.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"
#include "components/simulator/simulator.h"



int main(void)
{
    printf("---------------------------------- NEW RUN --------------------------------------------\n");

    Instruction program[MAX_PROGRAM_SIZE];
    size_t program_size = 0;
    Core core = {0};
    program[program_size++] = (Instruction){OP_LOAD, 0, 10, 0};
    program[program_size++] = (Instruction){OP_LOAD, 1, 20, 0};
    program[program_size++] = (Instruction){OP_LOAD, 2, 30, 0};
    program[program_size++] = (Instruction){OP_ADD, 3, 0, 1};
    program[program_size++] = (Instruction){OP_ADD, 3, 3, 2};
    program[program_size++] = (Instruction){OP_STORE, 5, 3};



    
    
    program[program_size++] = (Instruction){OP_HALT, 0, 0, 0};



    core.current_state = NORMAL;
    Memory mem = {0};
    mem.data[10] = 4;
    mem.data[20] = 7;
    mem.data[30] = 40;
    run(&core, program, program_size, &mem);
    print_registers(&core);
    print_state(&core);
    print_program(program, program_size);
    print_statistics(stats);    
    core_reset(&core);
    memory_reset(&mem);
    stats.cycles = 0;
    return 0;
}
