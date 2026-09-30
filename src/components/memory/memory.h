#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

#define MEMORY_SIZE (1024 * 1024)

typedef struct {
    uint32_t data[MEMORY_SIZE];
} Memory;

void memory_write(Memory *memory, uint32_t address, uint32_t value);
uint32_t memory_read(const Memory *memory, uint32_t address);
void memory_reset(Memory *memory);

#endif