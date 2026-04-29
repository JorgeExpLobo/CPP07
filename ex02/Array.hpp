#pragma once
#include <cstddef>
#include <exception>
#include <stdexcept>

template <typename T>
class Array {
    private:
        T* _data;
        std::size_t _size;

    public: 
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array &operator=(const Array& other);
        T& operator[](std::size_t index);
        const T& operator[](std::size_t index) const;
        ~Array();
        
        std::size_t size() const;
};

#include "Array.tpp"