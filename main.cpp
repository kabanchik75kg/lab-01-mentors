// Created by kirill on 22.03.2021.

#include <iostream>
#include "lab.hpp"

int main() {
    std::cout << "lab-06 completed" << std::endl;

    // task1
    std::cout << "Find" << std::endl;
    std::vector<int> vec1 = {1, 3, 5, 9, 7, 2, -5, 0};
    std::cout << *Find(vec1.begin(), vec1.end(), 2) << std::endl;

    std::cout << *Find(vec1.begin(), vec1.end(), 10) << std::endl;
    std::cout << "============================================" << std::endl;

    // task2
    std::cout << "findInSorted" << std::endl;
    std::vector<int> vec2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    std::cout << *findInSorted(vec2.begin(), vec2.end(), 9) << std::endl;

    std::cout << *findInSorted(vec2.begin(), vec2.end(), 20) << std::endl;
    std::cout << "============================================" << std::endl;

    // task3
    std::cout << "WordsCounter" << std::endl;
    std::string a = ". Kirill ., Tomnov , . IU8-25,";
    std::cout << wordsCounter(a) << std::endl;
    std::cout << "============================================" << std::endl;

    // task4
    std::cout << "wordsMapCounter" << std::endl;
    std::map<std::string, int> map3 = wordsMapCounter(a);
    for (auto &it : map3) {
        std::cout << it.first << "\t" << it.second << std::endl;
    }
    std::cout << "============================================" << std::endl;

    // task5
    std::cout << "uniqueWords" << std::endl;
    std::vector<std::string> vec5 = uniqueWords(a);
    for (auto &el : vec5) {
        std::cout << el << std::endl;
    }
    std::cout << "============================================" << std::endl;

    // task6
    std::cout << "diffWordsCounter" << std::endl;
    int size = diffWordsCounter(a);
    std::cout << "Size:" << size << std::endl;
    std::cout << "============================================" << std::endl;

    // task7
    std::cout << "reverseNum" << std::endl;
    std::list<int> test = {1, 5, -6, 0, -8, 9};
    std::list<int> result = reverseNum(test);
    for (auto it : result) {
        std::cout << it << "\t";
    }
    std::cout << std::endl;
    std::cout << "============================================" << std::endl;

    // task8
    std::cout << "plusesDeleter" << std::endl;
    std::vector<int> vec8 = {1, 5, -6, -9, 0, -2, 22};
    for (auto el : plusesDeleter(vec8)) {
        std::cout << el << "\t";
    }
    std::cout << std::endl;
    std::cout << "============================================" << std::endl;

    // task9
    std::cout << "Sort" << std::endl;
    test = {19, 6, 8, 9, 5, 4, 23, 54, 0, -1, 3};
    result = Sort(test);

    for (auto el : result) {
        std::cout << el << "\t";
    }
    std::cout << std::endl;
    std::cout << "============================================" << std::endl;

    return 0;
};
