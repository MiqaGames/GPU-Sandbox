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

    return 0;
}
