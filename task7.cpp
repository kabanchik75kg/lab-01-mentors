// Created by Kirill on 21.03.2021.
#include "lab.hpp"

std::list<int> reverseNum(std::list<int> &lst) {
    if (lst.empty()) {
        return lst;
    }
    for (auto it = lst.begin(); it != lst.end(); it++) {
        if (*it != 0) {
            lst.insert(it, -*(it));
        }
    }
    return lst;
}
