#ifndef TINYVM_VM_H
#define TINYVM_VM_H

#include "device.hpp"
#include "cpu.hpp"

struct vm {
    cpu CPU{};
};
#endif
