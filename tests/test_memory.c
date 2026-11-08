#include <assert.h>
#include "components/memory/memory.h"

int main()
{
    static Memory memory = {0};
    const size_t memory_size = 128;
    assert(memory_init(&memory, memory_size));

    memory_write(&memory, 0, 42);
    memory_write(&memory, (uint32_t)(memory_size - 1), 99);

    assert(memory_read(&memory, 0) == 42);
    assert(memory_read(&memory, (uint32_t)(memory_size - 1)) == 99);
    assert(memory_read(&memory, (uint32_t)memory_size) == 0);

    memory_reset(&memory);
    assert(memory_read(&memory, 0) == 0);
    assert(memory_read(&memory, (uint32_t)(memory_size - 1)) == 0);
    memory_destroy(&memory);

    return 0;
}
