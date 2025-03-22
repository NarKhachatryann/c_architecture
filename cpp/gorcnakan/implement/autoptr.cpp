#include "AutoPtr.h"

template <typename T>
auto_ptr<T>::auto_ptr(T* p) : ptr(p) {}

template <typename T>
auto_ptr<T>::~auto_ptr() {
    delete ptr;
}

template <typename T>
auto_ptr<T>::auto_ptr(const auto_ptr& other) : ptr(other.release()) {
    other.ptr = nullptr;
}

template <typename T>
auto_ptr<T>& auto_ptr<T>::operator=(const auto_ptr& other) {
    if (this != &other) {
        delete ptr;
        ptr = other.ptr;
        other.ptr = nullptr;
    }
    return *this;
}

template <typename T>
T* auto_ptr<T>::get() const {
    return ptr;
}

template <typename T>
T* auto_ptr<T>::release() {
    T* temp = ptr;
    ptr = nullptr;
    return temp;
}

template <typename T>
void auto_ptr<T>::reset(T* p) {
    if (ptr != p) {
        delete ptr;
    }
    ptr = p;
}
