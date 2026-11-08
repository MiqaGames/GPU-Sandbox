#include "components/memory/memory.h"

#include <stdlib.h>
#include <string.h>

bool memory_init(Memory *memory, size_t size){
    if (memory == NULL || size == 0 || size > SIZE_MAX / sizeof(*memory->data)) {
        return false;
    }
    if (memory->data != NULL && memory->size == size) {
        return true;
    }

    uint32_t *data = calloc(size, sizeof(*data));
    if (data == NULL) {
        return false;
    }

    free(memory->data);
    memory->data = data;
    memory->size = size;
    return true;
}

void memory_destroy(Memory *memory){
    if (memory == NULL) return;
    free(memory->data);
    memory->data = NULL;
    memory->size = 0;
}

void memory_write(Memory *memory, uint32_t address, uint32_t value){
    if (memory != NULL && memory->data != NULL && (size_t)address < memory->size){
        memory->data[address] = value;
    }
}
uint32_t memory_read(const Memory *memory, uint32_t address){
    if (memory != NULL && memory->data != NULL && (size_t)address < memory->size){
        return memory->data[address];
    }
    return 0;
}
void memory_reset(Memory *memory){
    if (memory == NULL || memory->data == NULL) return;
    memset(memory->data, 0, memory->size * sizeof(*memory->data));
}
