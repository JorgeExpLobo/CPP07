#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
    std::cout << "\n--- EMPTY ARRAY ---" << std::endl;
    Array<int> empty;
    std::cout << "empty.size() = " << empty.size() << std::endl;

    try {
        std::cout << empty[0] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Accessing empty[0] threw exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- DEFAULT INITIALIZATION ---" << std::endl;
    Array<int> ints(5);
    std::cout << "ints.size() = " << ints.size() << std::endl;

    for (std::size_t i = 0; i < ints.size(); i++)
        std::cout << "ints[" << i << "] = " << ints[i] << std::endl;

    std::cout << "\n--- WRITE AND READ ELEMENTS ---" << std::endl;
    for (std::size_t i = 0; i < ints.size(); i++)
        ints[i] = static_cast<int>(i * 10);

    for (std::size_t i = 0; i < ints.size(); i++)
        std::cout << "ints[" << i << "] = " << ints[i] << std::endl;

    std::cout << "\n--- COPY CONSTRUCTOR / DEEP COPY ---" << std::endl;
    Array<int> copy(ints);

    copy[0] = 999;
    std::cout << "ints[0] = " << ints[0] << std::endl;
    std::cout << "copy[0] = " << copy[0] << std::endl;

    std::cout << "\n--- ASSIGNMENT OPERATOR / DEEP COPY ---" << std::endl;
    Array<int> assigned;
    assigned = ints;

    assigned[1] = 777;
    std::cout << "ints[1] = " << ints[1] << std::endl;
    std::cout << "assigned[1] = " << assigned[1] << std::endl;

    std::cout << "\n--- OUT OF BOUNDS ACCESS ---" << std::endl;
    try {
        std::cout << ints[ints.size()] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Accessing ints[ints.size()] threw exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- CONST ARRAY ACCESS AND CONST SIZE ---" << std::endl;
    const Array<int> constInts(ints);
    std::cout << "constInts.size() = " << constInts.size() << std::endl;
    std::cout << "constInts[2] = " << constInts[2] << std::endl;
    
    std::cout << "\n--- STRING ARRAY ---" << std::endl;
    Array<std::string> strings(3);

    strings[0] = "hello";
    strings[1] = "world";
    strings[2] = "templates";

    for (std::size_t i = 0; i < strings.size(); i++)
        std::cout << "strings[" << i << "] = " << strings[i] << std::endl;

    std::cout << "\n--- STRING DEEP COPY ---" << std::endl;
    Array<std::string> stringsCopy(strings);
    stringsCopy[0] = "changed";

    std::cout << "strings[0] = " << strings[0] << std::endl;
    std::cout << "stringsCopy[0] = " << stringsCopy[0] << std::endl;

    std::cout << "\n--- SELF ASSIGNMENT ---" << std::endl;
    Array<int>& self = ints;
    ints = self;
    for (std::size_t i = 0; i < ints.size(); i++)
        std::cout << "ints[" << i << "] = " << ints[i] << std::endl;

    std::cout << "\n--- DONE ---" << std::endl;
    return 0;
}