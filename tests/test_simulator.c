#include <assert.h>
#include "components/simulator/simulator.h"

int main()
{
    {
        Core core = {0};
        Memory memory = {0};
        Instruction program[2] = {
            {OP_HALT, 0, 0, 0},
            {OP_ADD, 0, 0, 1}
        };
        max_cycles = 10;

        run(&core, program, 2, &memory);
        assert(core.current_state == HALT);
    }

    {
        Core timeout_core = {0};
        Memory timeout_memory = {0};
        Instruction timeout_program[2] = {
            {OP_ADD, 0, 0, 0},
            {OP_ADD, 0, 0, 0}
        };
        max_cycles = 1;

        run(&timeout_core, timeout_program, 2, &timeout_memory);
        assert(timeout_core.current_state == TIMEOUT);
    }

    return 0;
}
