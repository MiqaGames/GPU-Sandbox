#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "components/debug/debug.h"
#include "components/core/core.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"
#include "components/simulator/simulator.h"



int main(void)
{
srand(time(NULL));
printf("---------------------------------- NEW RUN --------------------------------------------\n");

Instruction program[MAX_PROGRAM_SIZE];
size_t program_size = 0, loop_start = 0;
Core core = {0};
core.registers[0] = 0; //beg
core.registers[1] = 1; //step
core.registers[2] = 1000; //end
loop_start = program_size;
program[program_size++] = (Instruction){OP_LOAD, 3, 0, 0};
program[program_size++] = (Instruction){OP_ADD, 4, 4, 3};
program[program_size++] = (Instruction){OP_ADD, 0, 0, 1};
program[program_size++] = (Instruction){OP_CMP, 0, 2, 0};
program[program_size++] = (Instruction){OP_JIF, (uint32_t)loop_start, LESS, 0};






program[program_size++] = (Instruction){OP_HALT, 0, 0, 0};



core.current_state = NORMAL;
static Memory mem = {0};
for (int i = 0; i < 1000; i++){
    mem.data[i] = rand();
}
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
