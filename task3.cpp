// Created by Kirill on 20.03.2021.
#include "lab.hpp"

int wordsCounter(const std::string &str) {
    int count = 0;
    if (str.empty()) {
        return count;
    }
    int i = 0;
    std::string word;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '.' && str[i] != ',') {
            word += str[i];
        } else if (!word.empty()) {
            count++;
            word.clear();
        }
        i++;
    }
    if (!word.empty()) {
        count++;
        word.clear();
    }
    return count;
}
