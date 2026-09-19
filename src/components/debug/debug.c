#include "components/debug/debug.h"

void print_registers(const Core *core){
    printf("Registers:\n");
    for (int i = 0; i < REGISTERS_COUNT; i++)
    {
        printf("R%d: %u\n", i, core->registers[i]);
    }
}

void print_state(const Core *core){
    printf("Current state: ");
    switch (core->current_state)
    {
        case NORMAL:
            printf("NORMAL\n");
            break;
        case JUMP:
            printf("JUMP\n");
            break;
        case HALT:
            printf("HALT\n");
            break;
        case ERROR:
            printf("ERROR\n");
            break;
        case TIMEOUT:
            printf("TIMEOUT\n");
            break;
        default:
            printf("UNKNOWN\n");
            break;
    }
}

void print_program(const Instruction *program, size_t program_size){
    printf("Program:\n");
    for (size_t i = 0; i < program_size; i++)
    {
        printf("Instruction %zu: Opcode %d, a: %u, b: %u, c: %u\n",
               i,
               (int)program[i].opcode,
               program[i].a,
               program[i].b,
               program[i].c);
    }
}