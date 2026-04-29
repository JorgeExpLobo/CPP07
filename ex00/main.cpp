#include "whatever.hpp"
#include <iostream>

int main() {
    std::cout << "--- INTEGERS ---" << std::endl;
    int a = 4;
    int b = 7;
    int *a_ptr = &a;
    int *b_ptr = &b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << "min = " << min(a, b) << std::endl;
    std::cout << "max = " << max(a, b) << std::endl;

    swap(*a_ptr, *b_ptr);
    std::cout << "          --SWAPPING INTEGERS--" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << "--- CHARS ---" << std::endl;
    char c = 'c';
    char d = 'd';
    char *c_ptr = &c;
    char *d_ptr = &d;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "min = " << min(c, d) << std::endl;
    std::cout << "max = " << max(c, d) << std::endl;

    swap(*c_ptr, *d_ptr);
    std::cout << "          --SWAPPING CHARS--" << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    return 0;
} 