#ifndef AUTOPTR_H
#define AUTOPTR_H

template <typename T>
class auto_ptr {
private:
    T* ptr;
public:
    explicit auto_ptr(T* p = nullptr);
    ~auto_ptr();
    auto_ptr(const auto_ptr& other);
    auto_ptr& operator=(const auto_ptr& other);

    T* get() const;
    T* release();
    void reset(T* p = nullptr);
};

#endif
