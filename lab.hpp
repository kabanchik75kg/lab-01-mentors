// Created by Kirill on 18.03.2021.

#ifndef LAB_06_LAB_HPP_
#define LAB_06_LAB_HPP_

#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <list>

std::vector<int>::iterator Find(std::vector<int>::iterator first,
                                std::vector<int>::iterator last, int el);

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first,
                                        std::vector<int>::iterator last, int el);

int wordsCounter(const std::string &str);

std::map<std::string, int> wordsMapCounter(const std::string &str);

std::vector<std::string> uniqueWords(const std::string &str);

int diffWordsCounter(const std::string &str);

std::list<int> reverseNum(std::list<int> &lst);

std::vector<int> plusesDeleter(std::vector<int> &vec);

std::list<int> Sort(std::list<int> &lst);

#endif //LAB_06_LAB_HPP_
