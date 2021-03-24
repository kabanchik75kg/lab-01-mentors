// Created by kirill on 18.03.2021.
#include "lab.hpp"

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first,
                                        std::vector<int>::iterator last,
                                        int el) {
    auto f = first;
    std::vector<int>::iterator m;
    auto l = last;
    l--;
    while (f <= l) {
        m = ((l - f) / 2) + f;
        if (*m == el) {
            return m;
        }
        if (*m < el) {
            f = m + 1;
        }
        if (*m > el) {
            l = m - 1;
        }
    }
    return last;
}
