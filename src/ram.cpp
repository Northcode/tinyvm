#include "ram.hpp"

void ram::write(dword address, byte value) {
    if(address < MEMORY_SIZE) {
	data[address] = value;
    } else {
	//TODO: add interupt call here for invalid address
    }
}

void ram::write(dword address, dword value) {
    if(address + 4 < MEMORY_SIZE) {
	//TODO: implement thing here      
    } else {
	//TODO: add interupt call here for invalid address
    }
}
