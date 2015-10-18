#include <iostream>
#include "cpu.hpp"
#include "vm.hpp"

cpu::cpu() {
}

void cpu::tick() {
    std::cout << "1";
    parent->running = false;
}
