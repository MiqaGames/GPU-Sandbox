#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#define MAX_PROGRAM_SIZE 256
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

// Каждая инструкция хранит операцию и до трёх операндов: a, b и c.
// Назначение операндов зависит от конкретной инструкции.
// Регистры обозначаются числами от 0 до REGISTERS_COUNT - 1.
// Адрес памяти является прямым индексом от 0 до MEMORY_SIZE - 1.

/*
LOAD a, b:

a = номер регистра, куда записывается результат
b = прямой индекс ячейки памяти
читаем memory[b] и записываем значение в register[a]

STORE a, b:

a = прямой индекс ячейки памяти
b = номер регистра, из которого берём значение
записываем register[b] в memory[a]

ADD a, b, c:

a = регистр для результата
b = первый исходный регистр
c = второй исходный регистр
результат: register[a] = register[b] + register[c]

SUB a, b, c:

a = регистр для результата
b = уменьшаемый регистр
c = вычитаемый регистр
результат: register[a] = register[b] - register[c]

MUL a, b, c:

a = регистр для результата
b = первый множитель
c = второй множитель
результат: register[a] = register[b] * register[c]

DIV a, b, c:

a = регистр для результата
b = делимое
c = делитель
результат: register[a] = register[b] / register[c]
делитель register[c] не должен быть равен нулю

CMP a, b:

a = первый сравниваемый регистр
b = второй сравниваемый регистр
результат сохраняется в core->flag: GREATHER, LESS или SAME

JUMP a:

a = индекс инструкции, на которую нужно перейти

JIF a, b:

a = индекс инструкции, на которую нужно перейти
b = значение флага, при котором выполняется переход
переход выполняется, если core->flag == b

HALT:

останавливает выполнение программы; операнды игнорируются
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