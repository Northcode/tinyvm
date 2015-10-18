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
	*((dword*)&data[address])  = value;
    } else {
	//TODO: add interupt call here for invalid address
    }
}

void ram::write(dword address, int value) {
    write(address,(dword)value);
}

byte ram::read_byte(dword address) {
	if(address < MEMORY_SIZE) {
		return data[address];
	} else {
	//TODO: add interupt call here for invalid address
		return 0;
	}
}

dword ram::read_dword(dword address) {
	if(address < MEMORY_SIZE) {
		return *((dword*)&data[address]);
	} else {
	//TODO: add interupt call here for invalid address
		return 0;
	}
}

int ram::read_int(dword address) {
	if(address < MEMORY_SIZE) {
		return *((int*)&data[address]);
	} else {
	//TODO: add interupt call here for invalid address
		return 0;
	}
}
