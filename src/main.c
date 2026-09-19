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
        {OP_JUMP, 2},
        {OP_HALT},
        {OP_ADD, 0, 0, 1},
        {OP_CMP, 0, 7},
        {OP_JIF, 1, SAME},
        {OP_JIF, 2, LESS},
        {OP_HALT}
    };
    
    Core core = {0};
    for (int i = 0; i < REGISTERS_COUNT; i++){
        core.registers[i] = i+1;
    }
    core.current_state = NORMAL;
    size_t program_size = sizeof(program) / sizeof(program[0]);
    Memory mem = {0};
    mem.data[10] = 1;

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
