#include "components/debug/debug.h"

void print_registers(const Core *core){
    printf("Registers:\n");
    for (int i = 0; i < REGISTERS_COUNT; i++)
    {
        printf("R%d: %u\n", i, core->registers[i]);
    }
    printf("\n");
}
void print_cache_state(const Cache *cache){
    printf("Cache state:\n");
    for (size_t set_index = 0; set_index < cache->set_count; set_index++){
        printf("Set %zu:\n", set_index);
        for (size_t way_index = 0; way_index < CACHE_WAYS; way_index++){
            const CacheLine *line = &cache->sets[set_index].ways[way_index];
            printf("  Way %zu: Valid: %d, Tag: %u, Words: [", way_index, line->valid, line->tag);
            for (size_t word_index = 0; word_index < CACHE_LINE_WORDS; word_index++){
                printf("%u", line->words[word_index]);
                if (word_index < CACHE_LINE_WORDS - 1){
                    printf(", ");
                }
            }
            printf("]\n");
        }
    }
    printf("\n");
}

void print_cache_stats(const Cache *cache){
    if (cache == NULL){
        printf("Cache statistics: unavailable\n");
        return;
    }
    printf("Cache statistics: hits=%llu misses=%llu evictions=%llu\n",
           (unsigned long long)cache->stats.hits,
           (unsigned long long)cache->stats.misses,
           (unsigned long long)cache->stats.evictions);
}



void print_memory_state(const Memory *memory, uint32_t start_address, uint32_t end_address){
    printf("Memory state from address %u to %u:\n", start_address, end_address);
    for (uint32_t address = start_address; address <= end_address; address++){
        printf("Address %u: %u\n", address, memory->data[address]);
    }
    printf("\n");
}

void print_flag(const Core *core){
    printf("Flag: ");
    switch (core->flag)
    {
        case LESS:
            printf("LESS\n");
            break;
        case SAME:
            printf("SAME\n");
            break;
        case GREATER:
            printf("GREATER\n");
            break;
        default:
            printf("UNKNOWN\n");
            break;
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
         printf("Instruction %llu: Opcode %d, a: %u, b: %u, c: %u\n", (unsigned long long)i, (int)program[i].opcode, program[i].a, program[i].b, program[i].c);
    }
    printf("\n");
}

void print_statistics(Statistics stats){
    printf("STATISTICS: \nCycles: %" PRIu32 "\nInstruction executed: %" PRIu32 "\nLoads: %" PRIu32 "\nStores: %" PRIu32 "\nAdds: %" PRIu32 "\nSubs: %" PRIu32 "\nMuls: %" PRIu32 "\nDivs: %" PRIu32 "\nJumps: %" PRIu32 "\nConditional jumps: %" PRIu32 "\nChecks: %" PRIu32 "\nErrors: %"PRIu32"\n", stats.cycles, stats.instruction_executed, stats.loads, stats.stores, stats.adds, stats.subs, stats.muls, stats.divs, stats.jumps, stats.conditional_jumps, stats.checks,stats.errors);
}

static const char *task_state_name(TaskState state){
    switch (state){
        case FREE: return "FREE";
        case WORKING: return "WORKING";
        case DONE: return "DONE";
        case TASK_ERROR: return "ERROR";
        case TASK_TIMEOUT: return "TIMEOUT";
        default: return "UNKNOWN";
    }
}

static const char *core_state_name(State state){
    switch (state){
        case NORMAL: return "NORMAL";
        case JUMP: return "JUMP";
        case HALT: return "HALT";
        case ERROR: return "ERROR";
        case TIMEOUT: return "TIMEOUT";
        default: return "UNKNOWN";
    }
}

void print_simulator(const Simulator *sim){
    if (sim == NULL){
        printf("Simulator: NULL\n");
        return;
    }

    printf("Simulator cycles: %" PRIu64 "\n", sim->cycles);
    printf("Cores (%zu):\n", sim->core_count);
    for (size_t i = 0; i < sim->core_count; i++){
        const CoreContext *core = &sim->cores[i];
        printf("    Core %zu: slot=%s, last task=%zu, state=%s, PC=%" PRIu32 "\n",i, task_state_name(core->task_state), core->task_index, core_state_name(core->core.current_state), core->core.pc);
    }

    printf("Tasks (%zu):\n", sim->tasks_count);
    for (size_t i = 0; i < sim->tasks_count; i++){
        printf("    Task %zu: %s\n", i, task_state_name(sim->tasks[i].state));
        print_statistics(sim->tasks[i].stats);
    }
}