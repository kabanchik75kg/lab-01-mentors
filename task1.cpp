// Created by Kirill on 18.03.2021.
#include "lab.hpp"

std::vector<int>::iterator Find(std::vector<int>::iterator first,
                                std::vector<int>::iterator last, int el) {
    for (auto it = first; it != last; ++it) {
        if (*it == el) {
            return it;
        }
    }
    return last;
}
