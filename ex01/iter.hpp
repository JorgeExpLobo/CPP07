#pragma once
#include <cstddef>

template <typename T_ARRAY, typename T_FUNC>
void iter(T_ARRAY *array, const std::size_t length, T_FUNC func) {
    for (std::size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}