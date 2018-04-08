//
// Created by antoine on 08/04/18.
//

#ifndef TEST_CI_CPP_LOGGER_H
#define TEST_CI_CPP_LOGGER_H


#include <iostream>

class Logger {
public:
    static void log(const std::string &msg) {
        std::cout << msg << std::endl;
    }
};


#endif //TEST_CI_CPP_LOGGER_H
