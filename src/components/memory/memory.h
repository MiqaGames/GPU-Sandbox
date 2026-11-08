#ifndef MEMORY_H
#define MEMORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


typedef struct {
    uint32_t *data;
    size_t size;
} Memory;

bool memory_init(Memory *memory, size_t size);
void memory_destroy(Memory *memory);
void memory_write(Memory *memory, uint32_t address, uint32_t value);
uint32_t memory_read(const Memory *memory, uint32_t address);
void memory_reset(Memory *memory);

#endif