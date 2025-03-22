#include "UniquePtr.h"

template <typename T, typename Deleter>
unique_ptr<T, Deleter>::unique_ptr(T* ptr, Deleter deleter) : resource(ptr), deleter(deleter) {}

template <typename T, typename Deleter>
unique_ptr<T, Deleter>::~unique_ptr() {
    deleter(resource);
}

template <typename T, typename Deleter>
unique_ptr<T, Deleter>::unique_ptr(unique_ptr&& other) noexcept : resource(other.resource), deleter(other.deleter) {
    other.resource = nullptr;
}

template <typename T, typename Deleter>
unique_ptr<T, Deleter>& unique_ptr<T, Deleter>::operator=(unique_ptr&& other) noexcept {
    if (this != &other) {
        reset(other.release());
        other.resource = nullptr;
    }
    return *this;
}

template <typename T, typename Deleter>
T* unique_ptr<T, Deleter>::get() const {
    return resource;
}

template <typename T, typename Deleter>
void unique_ptr<T, Deleter>::reset(T* p) {
    if (resource != p) {
        deleter(resource);
        resource = p;
    }
}

template <typename T, typename Deleter>
T* unique_ptr<T, Deleter>::release() {
    T* temp = resource;
    resource = nullptr;
    return temp;
}
