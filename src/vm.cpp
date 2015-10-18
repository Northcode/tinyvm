#include "vm.hpp"

vm::vm() {
    add_device(new cpu());
}

void vm::add_device(device* dev) {
    dev->parent = this;
    devices.push_back(std::move(std::unique_ptr<device>(dev)));
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
