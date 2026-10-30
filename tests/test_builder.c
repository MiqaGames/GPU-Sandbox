#include <assert.h>
#include <stdint.h>

#include "components/builder/builder.h"

int main(void)
{
    static const Instruction program[] = {
        {OP_HALT, 0, 0, 0}
    };
    static CoreContext cores[2];
    static Task tasks[2];
    static Simulator simulator;
    static Memory memory;

    Task default_task = task_create(program, ARRAY_COUNT(program));
    assert(default_task.program.instructions == program);
    assert(default_task.program.size == ARRAY_COUNT(program));
    assert(default_task.state == FREE);
    for (size_t i = 0; i < REGISTERS_COUNT; i++) {
        assert(default_task.core_registers[i] == 0);
    }

    Task explicit_state_task = task_create(program, ARRAY_COUNT(program), TASK_TIMEOUT);
    assert(explicit_state_task.program.instructions == program);
    assert(explicit_state_task.program.size == ARRAY_COUNT(program));
    assert(explicit_state_task.state == TASK_TIMEOUT);

    task_set_register(&default_task, 3, 1234);
    assert(default_task.core_registers[3] == 1234);
    task_set_register(&default_task, REGISTERS_COUNT, 99);
    assert(default_task.core_registers[3] == 1234);

    tasks[0] = default_task;
    tasks[1] = explicit_state_task;
    simulator_configure(&simulator, cores, ARRAY_COUNT(cores), tasks, ARRAY_COUNT(tasks));
    assert(simulator.cores == cores);
    assert(simulator.core_count == ARRAY_COUNT(cores));
    assert(simulator.tasks == tasks);
    assert(simulator.tasks_count == ARRAY_COUNT(tasks));

    const uint32_t values[] = {7, 14, 21};
    memory_load_words(&memory, 40, values, ARRAY_COUNT(values));
    assert(memory_read(&memory, 40) == 7);
    assert(memory_read(&memory, 41) == 14);
    assert(memory_read(&memory, 42) == 21);

    return 0;
}
