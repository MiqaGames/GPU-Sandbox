#include <stdio.h>

#include "components/instruction/instruction.h"



void execute(Core *core, const Instruction *instruction, Memory *memory, size_t program_size, Statistics *stats){
    core->current_state = NORMAL;
    switch (instruction->opcode){
        case OP_LOAD:
            if (checker_destination(instruction->a, core, stats) && checker_address_register(instruction->b, core, stats)){
                uint32_t address = core->registers[instruction->b];
                if (checker_memory_address(address, core, stats)){
                    core->registers[instruction->a] = memory_read(memory, address);
                    stats->loads++;
                }
            }
            break;

        case OP_STORE:
            if (checker_address_register(instruction->a, core, stats) && checker_source_register(instruction->b, core, stats)) {
                uint32_t address = core->registers[instruction->a];
                if (checker_memory_address(address, core, stats)){
                    memory_write(memory, address, core->registers[instruction->b]);
                    stats->stores++;
                }
            }
            break;

        case OP_JIF:
            if (checker_instruction_index(instruction->a, core, program_size, stats)) {
                if ((Flag)instruction->b == core->flag) {
                    core->pc = instruction->a;
                    core->current_state = JUMP;
                    stats->conditional_jumps++;
                }
            }
            break;

        case OP_JUMP:
            {
                uint32_t target = instruction->a;
                if (checker_instruction_index(target, core, program_size, stats)){
                    core->pc = target;
                    core->current_state = JUMP;
                    stats->jumps++;
                }
            }
            break;

        case OP_ADD:
            if (checker_destination(instruction->a, core, stats) && checker_source_register(instruction->b, core, stats) && checker_source_register(instruction->c, core, stats)) {
                core->registers[instruction->a] = core->registers[instruction->b] + core->registers[instruction->c];
                stats->adds++;
            }
            break;

        case OP_SUB:
            if (checker_destination(instruction->a, core, stats) && checker_source_register(instruction->b, core, stats) && checker_source_register(instruction->c, core, stats)) {
                core->registers[instruction->a] = core->registers[instruction->b] - core->registers[instruction->c];
                stats->subs++;
            }
            break;

        case OP_MUL:
            if (checker_destination(instruction->a, core, stats) && checker_source_register(instruction->b, core, stats) && checker_source_register(instruction->c, core, stats)) {
                core->registers[instruction->a] = core->registers[instruction->b] * core->registers[instruction->c];
                stats->muls++;
            }
            break;

        case OP_DIV:
            if (checker_destination(instruction->a, core, stats) && checker_source_register(instruction->b, core, stats) && checker_source_register(instruction->c, core, stats)){
                if (core->registers[instruction->c] == 0){
                    core->current_state = ERROR;
                    stats->errors++;
                    printf("Error: Division by zero\n");
                    return;
                }
                core->registers[instruction->a] = core->registers[instruction->b] / core->registers[instruction->c];
                stats->divs++;
            }

            break;

        case OP_CMP:
            if (checker_source_register(instruction->a, core, stats) && checker_source_register(instruction->b, core, stats)) {
                if (core->registers[instruction->a] > core->registers[instruction->b]) {
                    core->flag = GREATER;
                }
                else if (core->registers[instruction->a] < core->registers[instruction->b]) {
                    core->flag = LESS;
                }
                else {
                    core->flag = SAME;
                }
                stats->checks++;
            }
            break;

        case OP_HALT:
            core->current_state = HALT;
            break;

        default:
            core->current_state = ERROR;
            stats->errors++;
            printf("Error: Unknown opcode %d\n", instruction->opcode);
            break;
    }
}



// checkers на всё и вся
bool checker_destination(uint32_t checkvar, Core *core, Statistics *stats){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        stats->errors++;
        printf("Error: Invalid destination register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_address_register(uint32_t checkvar, Core *core, Statistics *stats){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        stats->errors++;
        printf("Error: Invalid address register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_source_register(uint32_t checkvar, Core *core, Statistics *stats){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        stats->errors++;
        printf("Error: Invalid source register index %u\n", checkvar);
        return false;
    }
    return true;
}

bool checker_condition_register(uint32_t checkvar, Core *core, Statistics *stats){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        stats->errors++;
        printf("Error: Invalid condition register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_target_register(uint32_t checkvar, Core *core, Statistics *stats){
    if (checkvar >= REGISTERS_COUNT){
        core->current_state = ERROR;
        stats->errors++;
        printf("Error: Invalid target register index %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_memory_address(uint32_t checkvar, Core *core, Statistics *stats){
    if (checkvar >= MEMORY_SIZE){
        core->current_state = ERROR;
        stats->errors++;
        printf("Error: Invalid memory address %u\n", checkvar);
        return false;
    }
    return true;
}
bool checker_instruction_index(uint32_t checkvar, Core *core, size_t program_size, Statistics *stats){
    if (checkvar >= program_size){
        core->current_state = ERROR;
        stats->errors++;
        printf("Error: Invalid instruction index %u\n", checkvar);
        return false;
    }
    return true;
}
