struct cpu : public device {
    int A[REG_SIZE];

    instruction instruction_set[];
    
    cpu() {
    }
};
