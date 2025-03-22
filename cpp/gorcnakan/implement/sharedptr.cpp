#include "SharedPtr.h"

#include "SharedPtr.h"

template <typename T>
shared_ptr<T>::shared_ptr(T* ptr) {
    if (ptr) {
        control_block = new ControlBlock<T>(ptr);
    } else {
        control_block = nullptr;
    }
}

template <typename T>
shared_ptr<T>::shared_ptr(const shared_ptr& other) {
    control_block = other.control_block;
    if (control_block) {
        control_block->add_shared();
    }
}

template <typename T>
shared_ptr<T>::~shared_ptr() {
    if (control_block) {
        control_block->release_shared();
    }
}

template <typename T>
int shared_ptr<T>::use_count() const {
    return control_block ? control_block->get_shared_count() : 0;
}

template <typename T>
T* shared_ptr<T>::get() const {
    return control_block ? control_block->get_resource() : nullptr;
}

template <typename T>
weak_ptr<T> shared_ptr<T>::weak_from_this() const {
    return weak_ptr<T>(*this);
}