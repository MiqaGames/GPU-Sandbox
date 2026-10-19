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



int main()
{
    const Instruction sum_program[] = {
        {OP_ADD, 2, 0, 1},
        {OP_STORE, 6, 2, 0},
        {OP_HALT, 0, 0, 0}
    };
    const Instruction multiply_program[] = {
        {OP_MUL, 2, 0, 1},
        {OP_STORE, 6, 2, 0},
        {OP_HALT, 0, 0, 0}
    };
    const Instruction subtract_program[] = {
        {OP_SUB, 2, 0, 1},
        {OP_STORE, 6, 2, 0},
        {OP_HALT, 0, 0, 0}
    };

    CoreContext cores[2] = {0};
    Task tasks[] = {
        {
            .program = {sum_program, sizeof(sum_program) / sizeof(sum_program[0])},
            .core_registers = {100, 28, 0, 0, 0, 0, 100},
            .state = FREE
        },
        {
            .program = {multiply_program, sizeof(multiply_program) / sizeof(multiply_program[0])},
            .core_registers = {100, 6, 0, 0, 0, 0, 101},
            .state = FREE
        },
        {
            .program = {subtract_program, sizeof(subtract_program) / sizeof(subtract_program[0])},
            .core_registers = {100, 48, 0, 0, 0, 0, 102},
            .state = FREE
        }
    };
    static Simulator sim = {0}; // static т.к. там хрнаится +- 4МБ, так что надо брать память не из стэка

    sim.cores = cores;
    sim.core_count = sizeof(cores) / sizeof(cores[0]);
    sim.tasks = tasks;
    sim.tasks_count = sizeof(tasks) / sizeof(tasks[0]);

    run(&sim);

    print_simulator(&sim);
    printf("Task outputs in memory:\n");
    printf("Task 0: %u\n", sim.memory.data[100]);
    printf("Task 1: %u\n", sim.memory.data[101]);
    printf("Task 2: %u\n", sim.memory.data[102]);

    return 0;
}
