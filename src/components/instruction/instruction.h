#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "components/core/core.h"
#include "components/memory/memory.h"

typedef enum{
    OP_LOAD,
    OP_STORE,
    OP_ADD,
    OP_SUB,
    OP_HALT,
    OP_JUMP,
    OP_MUL,
    OP_DIV,
    OP_CMP,
    OP_JIF
} Opcode;

// a всегда является целевым регистром
// b всегда источник/адрес в регистре
// c всегда второй источник
// если инструкции нужны адрес или индекс, они передаются через регистр

/*
LOAD a, b:

a = регистр назначения
b = регистр, в котором лежит адрес памяти
читаем memory[reg[b]] и кладём в reg[a]

STORE a, b:

a = регистр с адресом памяти
b = регистр со значением
пишем reg[b] в memory[reg[a]]
ADD a, b, c:

a = куда добавить
b, c = что добавить
CMP:
a,b что проверять
в качестве ответа core->flag

JUMP a:

a = регистр с индексом инструкции
JNZ a, b:

a = проверяем, чтобы было не равно нулю
b = адресс перехода, если выполнилась проверка
HALT:

операнды игнорируются
*/
typedef struct{
    Opcode opcode;
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Instruction;

void execute(Core *core, const Instruction *instruction, Memory *memory, size_t program_size);
bool checker_destination(uint32_t checkvar, Core *core);
bool checker_address_register(uint32_t checkvar, Core *core);
bool checker_memory_address(uint32_t checkvar, Core *core);
bool checker_source_register(uint32_t checkvar, Core *core);
bool checker_condition_register(uint32_t checkvar, Core *core);
bool checker_target_register(uint32_t checkvar, Core *core);
bool checker_instruction_index(uint32_t checkvar, Core *core, size_t program_size);


#endif