#ifndef TINYVM_INSTRUCTIONS_H
#define  TINYVM_INSTRUCTIONS_H
#define INSTRUCTION(FUNC) void FUNC(vm* parent)

struct vm;

INSTRUCTION(mov);


#endif
