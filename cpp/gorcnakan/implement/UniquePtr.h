#ifndef UNIQUEPTR_H
#define UNIQUEPTR_H

#include <memory>

template <typename T, typename Deleter = std::default_delete<T>>
class unique_ptr {
public:
    explicit unique_ptr(T* ptr = nullptr, Deleter deleter = Deleter());
    ~unique_ptr();

    unique_ptr(unique_ptr&& other) noexcept;
    unique_ptr& operator=(unique_ptr&& other) noexcept;

    T* get() const;
    void reset(T* p = nullptr);
    T* release();

private:
    T* resource;
    Deleter deleter;
};

#endif
