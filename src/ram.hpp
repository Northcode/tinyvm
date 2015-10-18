#ifndef TINYVM_RAM_H
#define TINYVM_RAM_H

#include "device.hpp"

typedef unsigned char byte;
typedef unsigned int dword;

constexpr dword MEMORY_SIZE = 4*1024;

struct ram : public device {
    byte data[MEMORY_SIZE];

    void write (dword address, byte value);
    void write (dword address, dword value);
    void write (dword address, int value);

    byte  read_byte  (dword address);
    dword read_dword (dword address);
    int   read_int   (dword address);
};

#endif
