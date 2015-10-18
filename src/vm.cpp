#include "vm.hpp"

vm::vm() {
    devices.push_back(std::unique_ptr<device>((device*)new cpu()));
}

void vm::tick() {
    
}

void vm::run() {
    running = true;
    while(running)
	tick();
}
