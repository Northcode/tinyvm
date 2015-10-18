#include "vm.hpp"

vm::vm() {
    devices.push_back(std::unique_ptr<device>((device*)new cpu()));
    devices[0]->parent = this;
}

void vm::tick() {
    for(auto& d : devices) {
	d->tick();
    }
}

void vm::run() {
    running = true;
    while(running)
	tick();
}
