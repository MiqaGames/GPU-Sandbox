#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#include "components/builder/builder.h"

#define STRESS_CORE_COUNT 4
#define STRESS_TASK_COUNT 4
#define STRESS_ITERATIONS 50000
#define STRESS_MEMORY_STRIDE 60000


int main()
{
    static const Instruction dot_product[] = {
        {OP_LOAD, 4, 0, 0},
        {OP_LOAD, 5, 1, 0},
        {OP_MUL, 4, 4, 5},
        {OP_ADD, 3, 3, 4},
        {OP_ADD, 0, 0, 7},
        {OP_ADD, 1, 1, 7},
        {OP_ADD, 2, 2, 7},
        {OP_CMP, 2, 6, 0},
        {OP_JIF, 0, LESS, 0},
        {OP_STORE, 0, 3, 0},
        {OP_SUB, 4, 3, 7},
        {OP_DIV, 5, 4, 6},
        {OP_JUMP, 14, 0, 0},
        {OP_ADD, 5, 5, 5},
        {OP_HALT, 0, 0, 0}
    };
    static const Instruction cache_pressure[] = {
        {OP_LOAD, 3, 0, 0},
        {OP_LOAD, 3, 1, 0},
        {OP_LOAD, 3, 2, 0},
        {OP_LOAD, 3, 0, 0},
        {OP_STORE, 4, 3, 0},
        {OP_HALT, 0, 0, 0}
    };
    static const Instruction stress_program[] = {
        {OP_LOAD, 5, 4, 0},
        {OP_ADD, 5, 5, 1},
        {OP_MUL, 6, 5, 1},
        {OP_ADD, 3, 3, 6},
        {OP_STORE, 4, 5, 0},
        {OP_ADD, 4, 4, 1},
        {OP_ADD, 0, 0, 1},
        {OP_SUB, 6, 2, 0},
        {OP_DIV, 7, 6, 1},
        {OP_CMP, 0, 2, 0},
        {OP_JIF, 0, LESS, 0},
        {OP_HALT, 0, 0, 0}
    };

    static CoreContext dot_cores[1];
    static Task dot_tasks[1];
    static Simulator dot_sim;

    dot_tasks[0] = task_create(dot_product, ARRAY_COUNT(dot_product));
    task_set_register(&dot_tasks[0], 0, 100);
    task_set_register(&dot_tasks[0], 1, 200);
    task_set_register(&dot_tasks[0], 6, 4);
    task_set_register(&dot_tasks[0], 7, 1);
    simulator_configure(&dot_sim, dot_cores, ARRAY_COUNT(dot_cores), dot_tasks, ARRAY_COUNT(dot_tasks));

    const uint32_t vector_a[] = {1, 2, 3, 4};
    const uint32_t vector_b[] = {5, 6, 7, 8};
    memory_load_words(&dot_sim.memory, 100, vector_a, ARRAY_COUNT(vector_a));
    memory_load_words(&dot_sim.memory, 200, vector_b, ARRAY_COUNT(vector_b));

    printf("=== Dot product task ===\n");
    run(&dot_sim);
    print_simulator(&dot_sim);
    print_registers(&dot_cores[0].core);
    print_flag(&dot_cores[0].core);
    print_state(&dot_cores[0].core);
    print_memory_state(&dot_sim.memory, 100, 104);
    print_cache_stats(&dot_cores[0].l1_cache);
    print_cache_stats(&dot_sim.l2_cache);

    static CoreContext cache_cores[2];
    static Task cache_tasks[3];
    static Simulator cache_sim;

    simulator_configure(&cache_sim, cache_cores, ARRAY_COUNT(cache_cores), cache_tasks, ARRAY_COUNT(cache_tasks));

    const uint32_t cache_inputs[] = {11, 22, 33};
    memory_load_words(&cache_sim.memory, 0, cache_inputs, 1);
    memory_load_words(&cache_sim.memory, 128, cache_inputs + 1, 1);
    memory_load_words(&cache_sim.memory, 256, cache_inputs + 2, 1);

    for (size_t i = 0; i < ARRAY_COUNT(cache_tasks); i++) {
        cache_tasks[i] = task_create(cache_pressure, ARRAY_COUNT(cache_pressure));
        task_set_register(&cache_tasks[i], 0, 0);
        task_set_register(&cache_tasks[i], 1, 128);
        task_set_register(&cache_tasks[i], 2, 256);
        task_set_register(&cache_tasks[i], 4, 10000 + (uint32_t)i);
    }

    printf("\n=== FIFO and cache pressure tasks ===\n");
    run(&cache_sim);
    print_simulator(&cache_sim);
    print_memory_state(&cache_sim.memory, 10000, 10002);
    print_cache_stats(&cache_cores[0].l1_cache);
    print_cache_stats(&cache_cores[1].l1_cache);
    print_cache_stats(&cache_sim.l2_cache);

    static CoreContext stress_cores[STRESS_CORE_COUNT];
    static Task stress_tasks[STRESS_TASK_COUNT];
    static Simulator stress_sim;

    simulator_configure(&stress_sim, stress_cores, ARRAY_COUNT(stress_cores),
                        stress_tasks, ARRAY_COUNT(stress_tasks));

    for (size_t i = 0; i < ARRAY_COUNT(stress_tasks); i++) {
        uint32_t base_address = 10000 + (uint32_t)i * STRESS_MEMORY_STRIDE;
        stress_tasks[i] = task_create(stress_program, ARRAY_COUNT(stress_program));
        task_set_register(&stress_tasks[i], 1, 1);
        task_set_register(&stress_tasks[i], 2, STRESS_ITERATIONS);
        task_set_register(&stress_tasks[i], 4, base_address);
    }

    printf("\n=== Four-core stress workload ===\n");
    clock_t stress_start = clock();
    run(&stress_sim);
    double elapsed_seconds = (double)(clock() - stress_start) / CLOCKS_PER_SEC;

    print_simulator(&stress_sim);
    for (size_t i = 0; i < ARRAY_COUNT(stress_cores); i++) {
        print_cache_stats(&stress_cores[i].l1_cache);
    }
    print_cache_stats(&stress_sim.l2_cache);
    for (size_t i = 0; i < ARRAY_COUNT(stress_tasks); i++) {
        uint32_t base_address = 10000 + (uint32_t)i * STRESS_MEMORY_STRIDE;
        print_memory_state(&stress_sim.memory,
                           base_address + STRESS_ITERATIONS - 1,
                           base_address + STRESS_ITERATIONS - 1);

        assert(stress_tasks[i].state == DONE);
        assert(stress_tasks[i].stats.instruction_executed == STRESS_ITERATIONS * 11 + 1);
        assert(stress_tasks[i].stats.loads == STRESS_ITERATIONS);
        assert(stress_tasks[i].stats.stores == STRESS_ITERATIONS);
        assert(stress_tasks[i].stats.adds == STRESS_ITERATIONS * 4);
        assert(stress_tasks[i].stats.subs == STRESS_ITERATIONS);
        assert(stress_tasks[i].stats.muls == STRESS_ITERATIONS);
        assert(stress_tasks[i].stats.divs == STRESS_ITERATIONS);
        assert(stress_tasks[i].stats.checks == STRESS_ITERATIONS);
        assert(stress_tasks[i].stats.conditional_jumps == STRESS_ITERATIONS - 1);
        assert(stress_tasks[i].stats.errors == 0);
        assert(stress_cores[i].core.registers[0] == STRESS_ITERATIONS);
        assert(stress_cores[i].core.registers[3] == STRESS_ITERATIONS);
        assert(stress_sim.memory.data[base_address + STRESS_ITERATIONS - 1] == 1);
    }
    assert(stress_sim.cycles == STRESS_ITERATIONS * 11 + 1);

    printf("Stress verification passed: %u iterations per task, %u tasks, %llu total instructions, %.3f seconds.\n",
           STRESS_ITERATIONS,
           STRESS_TASK_COUNT,
           (unsigned long long)(STRESS_ITERATIONS * 11 + 1) * STRESS_TASK_COUNT,
           elapsed_seconds);

    return 0;
}
