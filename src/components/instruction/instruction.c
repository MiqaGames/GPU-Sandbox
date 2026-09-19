#include <stdio.h>

#include "components/simulator/simulator.h"
#include "components/memory/memory.h"
#include "components/core/core.h"
#include "components/instruction/instruction.h"

void execute(Core *core, const Instruction *instruction, Memory *memory, size_t program_size){
    switch (instruction->opcode){
        case OP_LOAD:
            if (checker_destination(instruction->a, core) && checker_address_register(instruction->b, core)){
                uint32_t address = core->registers[instruction->b];
                if (checker_memory_address(address, core)){
                    core->registers[instruction->a] = memory_read(memory, address);
                }
            }
            break;

        case OP_STORE:
            if (checker_address_register(instruction->a, core) && checker_source_register(instruction->b, core)){
                uint32_t address = core->registers[instruction->a];
                if (checker_memory_address(address, core)){
                    memory_write(memory, address, core->registers[instruction->b]);
                }
            }
            break;

        case OP_JIF:
            if (checker_condition_register(instruction->a, core)){
                uint32_t target = instruction->a;
                if (checker_instruction_index(target, core, program_size)){
                    if ((Flag)instruction->b == core->flag){
                        core->pc = target;
                        core->current_state = JUMP;
                    }
                }
            }
            break;

        case OP_JUMP:
            if (checker_target_register(instruction->a, core)){
                uint32_t target = instruction->a;
                if (checker_instruction_index(target, core, program_size)){
                    core->pc = target;
                    core->current_state = JUMP;
                }
            }
            break;

        case OP_ADD:
            if (checker_destination(instruction->a, core) && checker_source_register(instruction->b, core) && checker_source_register(instruction->c, core))
                core->registers[instruction->a] = core->registers[instruction->b] + core->registers[instruction->c];
            break;

        case OP_SUB:
            if (checker_destination(instruction->a, core) && checker_source_register(instruction->b, core) && checker_source_register(instruction->c, core))
                core->registers[instruction->a] = core->registers[instruction->b] - core->registers[instruction->c];
            break;

        case OP_MUL:
            if (checker_destination(instruction->a, core) && checker_source_register(instruction->b, core) && checker_source_register(instruction->c, core))
                core->registers[instruction->a] = core->registers[instruction->b] * core->registers[instruction->c];
            break;

        case OP_DIV:
            if (checker_destination(instruction->a, core) && checker_source_register(instruction->b, core) && checker_source_register(instruction->c, core)){
                if (core->registers[instruction->c] == 0){
                    core->current_state = ERROR;
                    printf("ERROR: Division by zero\n");
                    return;
                }
                core->registers[instruction->a] = core->registers[instruction->b] / core->registers[instruction->c];
            }

            break;

        case OP_CMP:
            if (checker_destination(instruction->a, core) && checker_source_register(instruction->b, core))
                if (core->registers[instruction->a] > core->registers[instruction->b]){
                    core->flag = GREATHER;
                }
                else if (core->registers[instruction->a] < core->registers[instruction->b]){
                    core->flag = LESS;
                }
                else core->flag = SAME;
            break;

        case OP_HALT:
            core->current_state = HALT;
            break;

        default:
            core->current_state = ERROR;
            printf("Error: Unknown opcode %d\n", instruction->opcode);
            break;
    }
}



// checkers на всё и вся
bool checker_destination(uint32_t checkvar, Core *core){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        printf("Error: Invalid destination register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_address_register(uint32_t checkvar, Core *core){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        printf("Error: Invalid address register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_memory_address(uint32_t checkvar, Core *core){
    if (checkvar >= MEMORY_SIZE){
        core->current_state = ERROR;
        printf("Error: Invalid memory address %u\n", checkvar);
        return false;
    }
    return true;
}

bool checker_source_register(uint32_t checkvar, Core *core){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        printf("Error: Invalid source register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_condition_register(uint32_t checkvar, Core *core){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        printf("Error: Invalid condition register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_target_register(uint32_t checkvar, Core *core){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        printf("Error: Invalid target register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_instruction_index(uint32_t checkvar, Core *core, size_t program_size){
    if (checkvar >= program_size){
        core->current_state = ERROR;
        printf("Error: Invalid instruction index %u\n", checkvar);
        return false;
    }
    return true;
}
