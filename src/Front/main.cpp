#include "ui.h"

// cmake --build .\src\Front\build --config Release - to build the program
// .\src\Front\build\Release\microlab.exe - to run the program

#include <cstdint>
#include <cstdio>
#include <iomanip>
#include <memory>
#include <sstream>
#include <string>

extern "C" {
#include "components/cache/cache.h"
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"
#include "components/simulator/simulator.h"
}

namespace {
using namespace std;
constexpr Instruction kProgram[] = {
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
    {OP_HALT, 0, 0, 0},
};

Simulator simulator{};
CoreContext core{};
Task task{};
Program program{ kProgram, sizeof(kProgram) / sizeof(kProgram[0]) };

void set_initial_state()
{
    core.core = {};
    core.core.current_state = NORMAL;
    core.core.registers[0] = 100;
    core.core.registers[1] = 200;
    core.core.registers[6] = 4;
    core.core.registers[7] = 1;
    core.task_state = WORKING;
    core.task_index = 0;
    task.program = program;
    task.state = WORKING;
    task.stats = {};
    simulator.cycles = 0;
    simulator.next_task = 0;
}

bool initialize_backend()
{
    simulator.cores = &core;
    simulator.core_count = 1;
    simulator.tasks = &task;
    simulator.tasks_count = 1;
    if (!memory_init(&simulator.memory, 1024) || !cache_init(&core.l1_cache, 8, 2, 4) || !cache_init(&simulator.l2_cache, 16, 4, 4)) {
        return false;
    }

    const uint32_t vector_a[] = {1, 2, 3, 4};
    const uint32_t vector_b[] = {5, 6, 7, 8};
    for (size_t index = 0; index < 4; ++index) {
        memory_write(&simulator.memory, 100 + static_cast<uint32_t>(index), vector_a[index]);
        memory_write(&simulator.memory, 200 + static_cast<uint32_t>(index), vector_b[index]);
    }

    set_initial_state();
    return true;
}

const char *task_state_name(TaskState state)
{
    switch (state) {
    case WORKING: return "WORKING";
    case DONE: return "DONE";
    case TASK_ERROR: return "ERROR";
    case TASK_TIMEOUT: return "TIMEOUT";
    case FREE: return "FREE";
    default: return "UNKNOWN";
    }
}

string flag_name(Flag flag)
{
    switch (flag) {
    case LESS: return "LESS";
    case GREATER: return "GREATER";
    case SAME: return "SAME";
    default: return "UNKNOWN";
    }
}

string instruction_text()
{
    if (core.core.pc >= program.size) {
        return "PROGRAM COMPLETE";
    }

    const Instruction &instruction = program.instructions[core.core.pc];
    ostringstream text;
    switch (instruction.opcode) {
    case OP_LOAD: text << "LOAD R" << instruction.a << ", [R" << instruction.b << ']'; break;
    case OP_STORE: text << "STORE [R" << instruction.a << "], R" << instruction.b; break;
    case OP_ADD: text << "ADD R" << instruction.a << ", R" << instruction.b << ", R" << instruction.c; break;
    case OP_SUB: text << "SUB R" << instruction.a << ", R" << instruction.b << ", R" << instruction.c; break;
    case OP_MUL: text << "MUL R" << instruction.a << ", R" << instruction.b << ", R" << instruction.c; break;
    case OP_DIV: text << "DIV R" << instruction.a << ", R" << instruction.b << ", R" << instruction.c; break;
    case OP_CMP: text << "CMP R" << instruction.a << ", R" << instruction.b; break;
    case OP_JUMP: text << "JUMP " << instruction.a; break;
    case OP_JIF: text << "JIF " << instruction.a << ", " << flag_name(static_cast<Flag>(instruction.b)); break;
    case OP_HALT: text << "HALT"; break;
    default: text << "UNKNOWN"; break;
    }
    return text.str();
}

string hex_value(uint32_t value)
{
    ostringstream text;
    text << "0x" << uppercase << hex << setw(8) << setfill('0') << value;
    return text.str();
}

void sync_ui(const slint::ComponentHandle<MainWindow> &window)
{
    const auto &registers = core.core.registers;
    const auto &cache_stats = core.l1_cache.stats;
    const uint64_t accesses = cache_stats.hits + cache_stats.misses;
    const double hit_rate = accesses == 0 ? 0.0 : 100.0 * cache_stats.hits / accesses;
    ostringstream rate;
    rate << fixed << setprecision(1) << hit_rate << '%';

    window->set_cycle_count(static_cast<int>(simulator.cycles));
    window->set_pc_value(static_cast<int>(core.core.pc));
    window->set_executed_count(static_cast<int>(task.stats.instruction_executed));
    window->set_reg0(static_cast<int>(registers[0]));
    window->set_reg0_hex(slint::SharedString(hex_value(registers[0])));
    window->set_reg1(static_cast<int>(registers[1]));
    window->set_reg1_hex(slint::SharedString(hex_value(registers[1])));
    window->set_reg2(static_cast<int>(registers[2]));
    window->set_reg2_hex(slint::SharedString(hex_value(registers[2])));
    window->set_reg3(static_cast<int>(registers[3]));
    window->set_reg3_hex(slint::SharedString(hex_value(registers[3])));
    window->set_memory_word_4(static_cast<int>(memory_read(&simulator.memory, 104)));
    window->set_l1_hits(static_cast<int>(cache_stats.hits));
    window->set_l1_misses(static_cast<int>(cache_stats.misses));
    window->set_l1_evictions(static_cast<int>(cache_stats.evictions));
    window->set_l1_rate(slint::SharedString(rate.str()));
    window->set_task_status(slint::SharedString(task_state_name(task.state)));
    window->set_compare_flag(slint::SharedString(flag_name(core.core.flag)));
    window->set_current_instruction(slint::SharedString(instruction_text()));
}

void execute_steps(const slint::ComponentHandle<MainWindow> &window, size_t count)
{
    for (size_t index = 0; index < count && core.task_state == WORKING; ++index) {
        step_core(&core, &program, &simulator.memory, &simulator.l2_cache, &task.stats);
        ++simulator.cycles;
        if (core.task_state != WORKING) { task.state = core.task_state; }
    }
    sync_ui(window);
}

void reset_backend(const slint::ComponentHandle<MainWindow> &window)
{
    memory_reset(&simulator.memory);
    cache_reset(&core.l1_cache);
    cache_reset(&simulator.l2_cache);
    const uint32_t vector_a[] = {1, 2, 3, 4};
    const uint32_t vector_b[] = {5, 6, 7, 8};
    for (size_t index = 0; index < 4; ++index) {
        memory_write(&simulator.memory, 100 + static_cast<uint32_t>(index), vector_a[index]);
        memory_write(&simulator.memory, 200 + static_cast<uint32_t>(index), vector_b[index]);
    }
    set_initial_state();
    sync_ui(window);
}

}

int main()
{
    if (!initialize_backend()) {
        fprintf(stderr, "Failed to initialize the simulator preview.\n");
        return 1;
    }

    auto window = MainWindow::create();
    window->on_step_requested([&] { execute_steps(window, 1); });
    window->on_run_requested([&] { execute_steps(window, 10); });
    window->on_reset_requested([&] { reset_backend(window); });
    sync_ui(window);
    window->run();
    return 0;
}