#ifndef STATISTICS_H
#define STATISTICS_H

#include <stdint.h>
typedef struct {
    uint32_t cycles;
    uint32_t instruction_executed;
    
    uint32_t loads;
    uint32_t stores;
    
    uint32_t adds;
    uint32_t subs;
    uint32_t muls;
    uint32_t divs;
    
    uint32_t jumps;
    uint32_t conditional_jumps;
    uint32_t checks;
    
    uint32_t errors;
} Statistics;
#endif