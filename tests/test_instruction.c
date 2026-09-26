#include <assert.h>
#include "components/instruction/instruction.h"
#include "components/memory/memory.h"

int main()
{
    {
        Core core = {0};
        assert(checker_destination(0, &core) == true);
        core.current_state = NORMAL;
        assert(checker_destination(REGISTERS_COUNT, &core) == false && core.current_state == ERROR);
    }

    {
        Core core = {0};
        assert(checker_memory_address(0, &core) == true);
        core.current_state = NORMAL;
        assert(checker_memory_address(MEMORY_SIZE, &core) == false && core.current_state == ERROR);
    }

    {
        Core core = {0};
        assert(checker_instruction_index(3, &core, 5) == true);
        core.current_state = NORMAL;
        assert(checker_instruction_index(5, &core, 5) == false && core.current_state == ERROR);
    }

    {
        Core core = {0};
        Memory memory = {0};
        memory_write(&memory, 10, 77);
        core.registers[1] = 10;

        Instruction load = {OP_LOAD, 0, 1, 0};
        execute(&core, &load, &memory, 1);
        assert(core.registers[0] == 77 && core.current_state == NORMAL);
    }

    {
        Core store_core = {0};
        Memory store_memory = {0};
        store_core.registers[0] = 20;
        store_core.registers[1] = 11;

        Instruction store = {OP_STORE, 0, 1, 0};
        execute(&store_core, &store, &store_memory, 1);
        assert(memory_read(&store_memory, 20) == 11 && store_core.current_state == NORMAL);
    }

    {
        Core core = {0};
        core.registers[0] = 10;
        core.registers[1] = 20;

        Instruction add = {OP_ADD, 2, 0, 1};
        execute(&core, &add, &(Memory){0}, 1);
        assert(core.registers[2] == 30);
    }

    {
        Core core = {0};
        core.registers[0] = 50;
        core.registers[1] = 20;

        Instruction sub = {OP_SUB, 2, 0, 1};
        execute(&core, &sub, &(Memory){0}, 1);
        assert(core.registers[2] == 30);
    }

    {
        Core core = {0};
        core.registers[0] = 10;
        core.registers[1] = 20;

        Instruction mul = {OP_MUL, 2, 0, 1};
        execute(&core, &mul, &(Memory){0}, 1);
        assert(core.registers[2] == 200);
    }

    {
        Core core = {0};
        core.registers[0] = 100;
        core.registers[1] = 20;

        Instruction div = {OP_DIV, 2, 0, 1};
        execute(&core, &div, &(Memory){0}, 1);
        assert(core.registers[2] == 5 && core.current_state == NORMAL);
    }

    {
        Core core = {0};
        core.registers[0] = 10;
        core.registers[1] = 0;

        Instruction div_zero = {OP_DIV, 2, 0, 1};
        execute(&core, &div_zero, &(Memory){0}, 1);
        assert(core.current_state == ERROR);
    }

    {
        Core core = {0};
        core.registers[0] = 10;
        core.registers[1] = 7;

        Instruction cmp = {OP_CMP, 0, 1, 0};
        execute(&core, &cmp, &(Memory){0}, 1);
        assert(core.flag == GREATHER);
    }

    {
        Core core = {0};
        core.registers[0] = 7;
        core.registers[1] = 10;

        Instruction cmp = {OP_CMP, 0, 1, 0};
        execute(&core, &cmp, &(Memory){0}, 1);
        assert(core.flag == LESS);
    }

    {
        Core core = {0};
        core.registers[0] = 9;
        core.registers[1] = 9;

        Instruction cmp = {OP_CMP, 0, 1, 0};
        execute(&core, &cmp, &(Memory){0}, 1);
        assert(core.flag == SAME);
    }

    {
        Core core = {0};
        Instruction halt = {OP_HALT, 0, 0, 0};
        execute(&core, &halt, &(Memory){0}, 1);
        assert(core.current_state == HALT);
    }

    {
        Core core = {0};
        Memory memory = {0};
        core.current_state = NORMAL;

        Instruction jump = {OP_JUMP, 2, 0, 0};
        execute(&core, &jump, &memory, 8);
        assert(core.pc == 2 && core.current_state == JUMP);
    }

    {
        Core core = {0};
        Memory memory = {0};
        core.current_state = NORMAL;
        core.flag = GREATHER;

        Instruction jif = {OP_JIF, 2, GREATHER, 0};
        execute(&core, &jif, &memory, 8);
        assert(core.pc == 2 && core.current_state == JUMP);
    }

    {
        Core core = {0};
        Memory memory = {0};
        core.current_state = NORMAL;
        core.flag = LESS;

        Instruction jif = {OP_JIF, 2, GREATHER, 0};
        execute(&core, &jif, &memory, 8);
        assert(core.pc == 0 && core.current_state == NORMAL);
    }

    return 0;
}
