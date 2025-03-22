#include "ControlBlock.h"

template <typename T>
ControlBlock<T>::ControlBlock(T* ptr) : resource(ptr), shared_count(1), weak_count(0) {}

template <typename T>
ControlBlock<T>::~ControlBlock() {
    delete resource;
}

template <typename T>
void ControlBlock<T>::add_shared() {
    ++shared_count;
}

template <typename T>
void ControlBlock<T>::release_shared() {
    if (--shared_count == 0) {
        delete resource;
        if (weak_count == 0) {
            delete this;
        }
    }
}

template <typename T>
void ControlBlock<T>::release_weak() {
    if (--weak_count == 0 && shared_count == 0) {
        delete this;
    }
}

template <typename T>
T* ControlBlock<T>::get_resource() const {
    return resource;
}
