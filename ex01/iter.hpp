#pragma once

template <typename T_ARRAY, typename T_FUNC>
void iter(T_ARRAY *array, const size_t length, T_FUNC func) {
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}