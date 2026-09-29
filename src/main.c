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
    size_t program_size = 0, start_loop = 0, jif_pos = 0;
    Core core = {0};
    core.registers[0] = 0;
    core.registers[1] = 1;
    core.registers[2] = 10;

    jif_pos = program_size;
    program[program_size++] = (Instruction){OP_ADD, 0, 0, 1};
    program[program_size++] = (Instruction){OP_CMP, 0, 2, 0};
    program[program_size++] = (Instruction){OP_JIF, 0, LESS, 0};
    jif_pos = program_size+1;
    program[program_size++] = (Instruction){OP_JIF, (uint32_t)jif_pos, SAME, 0};
    program[program_size++] = (Instruction){OP_MUL, 4, 0, 0};
    program[program_size++] = (Instruction){OP_SUB, 5, 3, 4};

    program[program_size++] = (Instruction){OP_SUB, 6, 5, 1};
    program[program_size++] = (Instruction){OP_SUB, 6, 6, 1};
    program[program_size++] = (Instruction){OP_SUB, 6, 6, 1};
    start_loop = program_size;
    program[program_size++] = (Instruction){OP_JUMP, (uint32_t) program_size+1, 0, 0};
    program[program_size++] = (Instruction){OP_JUMP, 0, 0, 0};
    jif_pos = program_size;

    program[program_size++] = (Instruction){OP_ADD, 7, 7, 0};
    program[program_size++] = (Instruction){OP_CMP, 7, 6, 0};
    program[program_size++] = (Instruction){OP_JIF, (uint32_t)start_loop, LESS, 0};
    program[program_size++] = (Instruction){OP_ADD, 4, 4, 7};
    jif_pos = program_size;
    program[program_size++] = (Instruction){OP_ADD, 4, 4, 1};
    program[program_size++] = (Instruction){OP_CMP, 4, 3, 0};
    program[program_size++] = (Instruction){OP_JIF, (uint32_t)jif_pos, LESS, 0};

    





    
    
    program[program_size++] = (Instruction){OP_HALT, 0, 0, 0};



    core.current_state = NORMAL;
    Memory mem = {0};
    core.registers[0] = 0;
    core.registers[1] = 1;
    core.registers[2] = 10;
    core.registers[3] = 123;
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
