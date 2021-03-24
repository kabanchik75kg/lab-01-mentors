// Created by kirill on 20.03.2021.
#include "lab.hpp"

std::vector<std::string> uniqueWords(const std::string &str) {
    std::vector<std::string> result;
    if (str.empty()) {
        return result;
    }
    int i = 0;
    std::string word;
    std::map<std::string, int> answer;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '.' && str[i] != ',') {
            word += (str[i]);
        } else if (!word.empty()) {
            auto it = answer.find(word);
            if (it != answer.end()) {
                answer.at(word)++;
            } else {
                answer.emplace(word, 1);
                result.push_back(word);
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
            result.push_back(word);
        }
        word.clear();
    }
    return result;
}
