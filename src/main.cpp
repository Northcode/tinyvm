constexpr int REG_SIZE = 15;

struct vm;

typedef void (*instruction)(vm*);

#include "device.hpp"
#include "cpu.hpp"
#include "vm.hpp"

int main() {
    vm v{};
    return 0;
}
