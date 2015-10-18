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
	data[address + 3] = value >> 24 & 0x000000ff;
	data[address + 2] = value >> 16 & 0x000000ff;
	data[address + 1] = value >> 8  & 0x000000ff;
	data[address + 0] = value       & 0x000000ff;
    } else {
	//TODO: add interupt call here for invalid address
    }
}

void ram::write(dword address, int value) {
    write(address,(dword)value);
}

byte ram::read_byte(dword address) {
    if (address < MEMORY_SIZE) {
	return data[address];
    } else {
	//TODO: add interupt call for invalid address
	return 0;
    }
}

dword ram::read_dword (dword address) {
    if(address + 4 < MEMORY_SIZE) {
	return (data[address + 3] << 24 | data[address + 2] << 16 | data[address + 1] << 8 | data[address]);
    } else {
	//TODO: add interupt call for invalid address
	return 0;
    }
}

int ram::read_int(dword address) {
    return (int)read_dword(address);
}
