#ifndef WEAKPTR_H
#define WEAKPTR_H

#include "ControlBlock.h"
#include "SharedPtr.h"

template <typename T> class shared_ptr;

template <typename T>
class weak_ptr {
public:
    weak_ptr();
    weak_ptr(const shared_ptr<T>& shared);
    ~weak_ptr();

    shared_ptr<T> lock() const;
    int use_count() const;

private:
    ControlBlock<T>* control_block;
};

#endif
