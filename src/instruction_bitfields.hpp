#ifndef INSTRUCTION_BITFIELDS_H
#define INSTRUCTION_BITFIELDS_H

union mov_instruction {
    long int raw;
    struct {
	byte opcode:8;
	byte reg_A_addressing_mode:4;
	byte reg_B_addressing_mode:4;
	byte reg_A_selector:8;
	byte reg_B_selector:8;
	short reg_A_offset:16;
	short reg_B_offset:16;
    };
};

#endif
