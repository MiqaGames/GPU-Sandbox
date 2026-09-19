#include "components/core/core.h"

void core_reset(Core *core)
{
    for (int i = 0; i < REGISTERS_COUNT; i++){
        core->registers[i] = 0;
    }
    core->pc = 0;
    core->current_state = NORMAL;
}