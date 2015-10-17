constexpr int REG_SIZE = 15;

struct vm;

typedef void (*instruction)(vm*);

struct device {

};

struct cpu : public device {
    int A[REG_SIZE];

    instruction instruction_set[];
    
    cpu() {
    }
};

struct vm {
    cpu CPU{};
};

int main() {
    vm v{};
    return 0;
}
