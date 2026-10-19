#include <assert.h>
#include "components/debug/debug.h"

int main()
{
    Core core = {0};
    core.registers[0] = 42;
    core.current_state = HALT;

    print_registers(&core);
    print_state(&core);

    Instruction program[2] = {
        {OP_ADD, 0, 1, 2},
        {OP_HALT, 0, 0, 0}
    };
    print_program(program, 2);

    assert(core.registers[0] == 42);
    assert(core.current_state == HALT);

    static Simulator sim = {0};
    static CoreContext context = {0};
    Task task = {0};
    context.task_state = WORKING;
    context.task_index = 0;
    context.core.current_state = NORMAL;
    task.state = WORKING;
    sim.cores = &context;
    sim.core_count = 1;
    sim.tasks = &task;
    sim.tasks_count = 1;
    print_simulator(&sim);
    assert(context.task_state == WORKING);
    assert(context.core.current_state == NORMAL);
    assert(task.state == WORKING);

    return 0;
}
