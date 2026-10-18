#include <assert.h>

#include "components/simulator/simulator.h"

int main(void)
{
    static const Instruction add_program[] = {
        {OP_ADD, 2, 0, 1},
        {OP_STORE, 6, 2, 0},
        {OP_HALT, 0, 0, 0}
    };
    static const Instruction multiply_program[] = {
        {OP_MUL, 2, 0, 1},
        {OP_STORE, 6, 2, 0},
        {OP_HALT, 0, 0, 0}
    };
    static const Instruction loop_program[] = {
        {OP_JUMP, 0, 0, 0}
    };
    static CoreContext cores[2];
    static Task tasks[3];
    static Simulator sim;

    tasks[0] = (Task){
        .program = {add_program, sizeof(add_program) / sizeof(add_program[0])},
        .core_registers = {14, 28, 0, 0, 0, 0, 100},
        .state = FREE
    };
    tasks[1] = (Task){
        .program = {multiply_program, sizeof(multiply_program) / sizeof(multiply_program[0])},
        .core_registers = {7, 6, 0, 0, 0, 0, 101},
        .state = FREE
    };
    tasks[2] = (Task){
        .program = {add_program, sizeof(add_program) / sizeof(add_program[0])},
        .core_registers = {20, 22, 0, 0, 0, 0, 102},
        .state = FREE
    };
    cores[0] = (CoreContext){0};
    cores[1] = (CoreContext){0};
    sim.cores = cores;
    sim.core_count = sizeof(cores) / sizeof(cores[0]);
    sim.tasks = tasks;
    sim.tasks_count = sizeof(tasks) / sizeof(tasks[0]);
    memory_reset(&sim.memory);

    run(&sim);

    assert(tasks[0].state == DONE);
    assert(tasks[1].state == DONE);
    assert(tasks[2].state == DONE);
    assert(sim.memory.data[100] == 42);
    assert(sim.memory.data[101] == 42);
    assert(sim.memory.data[102] == 42);
    assert(tasks[0].stats.adds == 1 && tasks[0].stats.stores == 1);
    assert(tasks[1].stats.muls == 1 && tasks[1].stats.stores == 1);
    assert(tasks[2].stats.adds == 1 && tasks[2].stats.stores == 1);
    assert(sim.cycles == 6);
    assert(cores[0].task_state == FREE);
    assert(cores[1].task_state == FREE);
    assert(cores[0].task_index == 2);
    assert(cores[1].task_index == 1);

    tasks[0] = (Task){.state = FREE};
    tasks[1] = (Task){
        .program = {add_program, sizeof(add_program) / sizeof(add_program[0])},
        .core_registers = {5, 8, 0, 0, 0, 0, 103},
        .state = FREE
    };
    cores[0] = (CoreContext){0};
    sim.cores = cores;
    sim.core_count = 1;
    sim.tasks = tasks;
    sim.tasks_count = 2;
    memory_reset(&sim.memory);

    run(&sim);

    assert(tasks[0].state == TASK_ERROR);
    assert(tasks[1].state == DONE);
    assert(sim.memory.data[103] == 13);
    assert(cores[0].task_state == FREE);

    tasks[0] = (Task){
        .program = {loop_program, sizeof(loop_program) / sizeof(loop_program[0])},
        .state = FREE
    };
    cores[0] = (CoreContext){0};
    sim.cores = cores;
    sim.core_count = 1;
    sim.tasks = tasks;
    sim.tasks_count = 1;

    run(&sim);

    assert(tasks[0].state == TASK_TIMEOUT);
    assert(cores[0].core.current_state == TIMEOUT);

    return 0;
}
