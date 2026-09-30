#include "components/debug/debug.h"

void print_registers(const Core *core){
    printf("Registers:\n");
    for (int i = 0; i < REGISTERS_COUNT; i++)
    {
        printf("R%d: %u\n", i, core->registers[i]);
    }
    printf("\n");
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
    printf("\n");
}

void print_program(const Instruction *program, size_t program_size){
    printf("Program:\n");
    for (size_t i = 0; i < program_size; i++)
    {
         printf("Instruction %llu: Opcode %d, a: %u, b: %u, c: %u\n",
             (unsigned long long)i,
               (int)program[i].opcode,
               program[i].a,
               program[i].b,
               program[i].c);
    }
    printf("\n");
}

void print_statistics(Statistics stats){
    printf("STATISTICS: \nCycles: %" PRIu32 "\nInstruction executed: %" PRIu32 "\nLoads: %" PRIu32 "\nStores: %" PRIu32 "\nAdds: %" PRIu32 "\nSubs: %" PRIu32 "\nMuls: %" PRIu32 "\nDivs: %" PRIu32 "\nJumps: %" PRIu32 "\nConditional jumps: %" PRIu32 "\nChecks: %" PRIu32 "\nErrors: %"PRIu32"\n", stats.cycles, stats.instruction_executed, stats.loads, stats.stores, stats.adds, stats.subs, stats.muls, stats.divs, stats.jumps, stats.conditional_jumps, stats.checks,stats.errors);
}