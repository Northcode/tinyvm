#ifndef TINYVM_VM_H
#define TINYVM_VM_H

#include "cpu.hpp"

constexpr int REG_SIZE = 15;

typedef void (*instruction)(vm*);

struct vm {
    cpu CPU{};
};
#endif
