#include <assert.h>
#include "components/memory/memory.h"

int main()
{
    Memory memory = {0};

    memory_write(&memory, 0, 42);
    memory_write(&memory, MEMORY_SIZE - 1, 99);

    assert(memory_read(&memory, 0) == 42);
    assert(memory_read(&memory, MEMORY_SIZE - 1) == 99);
    assert(memory_read(&memory, MEMORY_SIZE) == 0);

    memory_reset(&memory);
    assert(memory_read(&memory, 0) == 0);
    assert(memory_read(&memory, MEMORY_SIZE - 1) == 0);

    return 0;
}
