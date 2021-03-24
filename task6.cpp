//Created by Kirill on 21.03.2021.

#include "lab.hpp"

int diffWordsCounter(const std::string &str) {
    int n = 0;
    if (str.empty()) {
        return n;
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
                n++;
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
            n++;
        }
        word.clear();
    }
    return n;
}
