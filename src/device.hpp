#ifndef TINYVM_DEVICE_H
#define TINYVM_DEVICE_H

struct vm;

struct device {
    vm* parent;

    virtual void tick() {}
    
};

#endif
