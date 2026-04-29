#include "iter.hpp"
#include <string>
#include <iostream>

void charToLower(char &c) {
    if (c >= 'A' && c <= 'Z')
        c += 32;
}

void stringToLower(std::string &str) {
    for (std::size_t i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

template <typename T>
void printElement(const T& element) {
    std::cout << element << std::endl;
}

void timesFive(int &num) {
    num *= 5;
}

int main(void) {

    int int_array[] = {20, 1, 0, 300};
    std::cout << "--- ORIGINAL INTEGERS ---" << std::endl;
    for (int i = 0; i < 4; i++)
		std::cout << int_array[i] << std::endl;
    ::iter(int_array, 4, timesFive);
    std::cout << "--- UPDATED INTEGERS ---" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << int_array[i] << std::endl;

    std::string str_array[] = {"HelLO", "gOODbye", "42", "FORty-tWo"};
    std::cout << "--- ORIGINAL STRINGS ---" << std::endl;
    for (int i = 0; i < 4; i++)
		std::cout << str_array[i] << std::endl;
    ::iter(str_array, 4, stringToLower);
    std::cout << "--- UPDATED STRINGS ---" << std::endl;
    for (int i = 0; i < 4; i++)
		std::cout << str_array[i] << std::endl;

    const int const_array[] = {1, 120, 25, 3};
    std::cout << "--- CONST INTEGERS ---" << std::endl;
    ::iter(const_array, 4, printElement<int>);

    return (0);
}