#include "components/memory/memory.h"
void memory_write(Memory *memory, uint32_t address, uint8_t value){ // Запись в память
    if (address < MEMORY_SIZE){
        memory->data[address] = value;
    }
}
uint8_t memory_read(const Memory *memory, uint32_t address){ // Считывание из памяти
    if (address < MEMORY_SIZE){
        return memory->data[address];
    }
    return 0;
}
void memory_reset(Memory *memory){
    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        memory->data[i] = 0;
    }
}
