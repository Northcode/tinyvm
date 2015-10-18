#ifndef TINYVM_CPU_H
#define TINYVM_CPU_H

#include "device.hpp"

constexpr int REG_SIZE = 15;

typedef void (*instruction)(vm*);

struct cpu : public device {
    int A[REG_SIZE];

    instruction instruction_set[];
    
    cpu();
    void tick();
};

#endif
