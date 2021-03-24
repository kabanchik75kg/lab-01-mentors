// Created by kirill on 21.03.2021.

#include "lab.hpp"

std::list<int> Sort(std::list<int> &lst) {
    for (auto it_i = lst.begin(); it_i != lst.end(); ++it_i) {
        for (auto it_j = it_i; it_j != lst.end(); ++it_j) {
            if (*it_j > *it_i) {
                std::swap(*it_j, *it_i);
            }
        }
    }
    return lst;
}
