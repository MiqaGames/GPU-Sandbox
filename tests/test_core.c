#include <assert.h>
#include "components/core/core.h"

int main()
{
    Core core = {0};
    core.registers[0] = 123;
    core.registers[7] = 321;
    core.pc = 99;
    core.current_state = HALT;
    core.flag = LESS;

    core_reset(&core);

    assert(core.pc == 0);
    assert(core.current_state == NORMAL);
    assert(core.registers[0] == 0 && core.registers[7] == 0);
    assert(core.flag == LESS);

    return 0;
}
