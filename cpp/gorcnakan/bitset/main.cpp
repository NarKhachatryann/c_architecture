#include <iostream>
#include <vector>

class Bitset{
    private:
    std::vector<bool> bits;
    size_t m_size;

    public:
    Bitset(size_t size) : bits(size, false), m_size(size) {}
    Bitset(const Bitset& other) : bits(other.bits), m_size(other.m_size) {}
    ~Bitset() = default;

    void set(size_t pos, bool bit) {
        bits[pos] = bit;
    }
    
    void reset(size_t pos) {
        if(pos < m_size) {
            bits[pos] = false;
        }
    }
    
    void flip(size_t pos) {
        if(pos < m_size) {
            bits[pos] = !bits[pos];
        }
    }

    bool test(size_t pos) {
        if(pos < m_size)
        return bits[pos];
        else return false;
    }

    size_t count() const {
        size_t counter = 0;
        for(int i = 0; i < m_size; ++i) {
            if(bits[i] == true)
            counter++;
        }
        return counter;
    }
    
    size_t size() const {
        return m_size;
    }
    
    void print() {
        for(int i = 0; i < m_size; ++i) {
            std::cout << (bits[i] ? '1' : '0');
        }
        std::cout << "\n";
    }
};