// Created by Kirill on 21.03.2021.

#include "lab.hpp"

std::vector<int> plusesDeleter(std::vector<int> &vec) {
    if (vec.empty()) {
        return vec;
    }
    for (auto it = vec.begin(); it != vec.end();) {
        if (*it > 0) {
            vec.erase(it);
        } else {
            it++;
        }
    }
    return vec;
}
