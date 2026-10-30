#include "components/builder/builder.h"


Task task_create_default(const Instruction *instructions, size_t instruction_count){
    Task task = {0};
    task.program.instructions = instructions;
    task.program.size = instruction_count;
    task.state = FREE;
    return task;
}

Task task_create_with_state(const Instruction *instructions, size_t instruction_count, TaskState state){
    Task task = {0};
    task.program.instructions = instructions;
    task.program.size = instruction_count;
    task.state = state;
    return task;
}

void task_set_register(Task *task, size_t register_index, uint32_t value){
    if (task != NULL && register_index < REGISTERS_COUNT){
        task->core_registers[register_index] = value;
    }
}

void simulator_configure(Simulator *simulator, CoreContext *cores, size_t core_count, Task *tasks, size_t task_count){
    simulator->cores = cores;
    simulator->core_count = core_count;
    simulator->tasks = tasks;
    simulator->tasks_count = task_count;
}

void memory_load_words(Memory *memory, uint32_t start_address, const uint32_t *values, size_t count){
    for (size_t i = 0; i < count; i++){
        memory_write(memory, start_address + (uint32_t)i, values[i]);
    }
}