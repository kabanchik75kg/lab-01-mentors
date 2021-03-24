// Created by kirill on 20.03.2021.
#include "lab.hpp"

std::map<std::string, int> wordsMapCounter(const std::string &str) {
    std::map<std::string, int> answer;
    if (str.empty()) {
        return answer;
    }
    int i = 0;
    std::string word;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '.' && str[i] != ',') {
            word += tolower(str[i]);
        } else if (!word.empty()) {
            auto it = answer.find(word);
            if (it != answer.end()) {
                answer.at(word)++;
            } else {
                answer.emplace(word, 1);
            }
            word.clear();
        }
        i++;
    }
    if (!word.empty()) {
        auto it = answer.find(word);
        if (it != answer.end()) {
            answer.at(word)++;
        } else {
            answer.emplace(word, 1);
        }
        word.clear();
    }
    return answer;
}
