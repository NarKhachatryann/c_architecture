#ifndef SHAREDPTR_H
#define SHAREDPTR_H

#include "ControlBlock.h"
#include "WeakPtr.h"

template <typename T> class weak_ptr;

template <typename T>
class shared_ptr {
    
private:
    ControlBlock<T>* control_block;

public:
    explicit shared_ptr(T* ptr = nullptr);
    shared_ptr(const shared_ptr& other);
    ~shared_ptr();

    int use_count() const;

    weak_ptr<T> weak_from_this() const;

    T* get() const;
};

#endif
