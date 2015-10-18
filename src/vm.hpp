#ifndef TINYVM_VM_H
#define TINYVM_VM_H
#include <vector>
#include <memory>
#include "cpu.hpp"

struct vm {
    bool running;
    std::vector<std::unique_ptr<device>> devices;
    cpu* CPU;

    vm();
    void tick();
    void run();

};
#endif
