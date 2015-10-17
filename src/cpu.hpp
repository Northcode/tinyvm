#ifndef TINYVM_CPU_H
#define TINYVM_CPU_H

#include "device.hpp"

struct cpu : public device {
    int A[REG_SIZE];

    instruction instruction_set[];
    
    cpu() {
    }
};
#endif
