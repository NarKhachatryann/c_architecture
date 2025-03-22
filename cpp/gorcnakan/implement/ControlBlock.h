#ifndef CONTROLBLOCK_H
#define CONTROLBLOCK_H

template <typename T>
class ControlBlock {
public:
    ControlBlock(T* ptr);
    ~ControlBlock();

    void add_shared();
    void release_shared();
    void release_weak();
    T* get_resource() const;

private:
    T* resource;
    int shared_count;
    int weak_count;
};

#endif
