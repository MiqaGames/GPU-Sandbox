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

    Instruction program[] = {
        {OP_ADD, 0,0,0},
        {OP_HALT}
    };
    
    Core core = {0};
    for (int i = 0; i < REGISTERS_COUNT; i++){
        core.registers[i] = (REGISTERS_COUNT-1 - i) * 3;
    }
    core.current_state = NORMAL;
    size_t program_size = sizeof(program) / sizeof(program[0]);
    Memory mem = {0};
    core.registers[REGISTERS_COUNT/2] = 50;

    run(&core, program, program_size, &mem);
    print_registers(&core);
    print_state(&core);
    print_program(program, program_size);
    printf("Total cycles executed: %u\n", cycles);
    core_reset(&core);
    memory_reset(&mem);
    cycles = 0;
    return 0;
}
