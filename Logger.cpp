//
// Created by antoine on 08/04/18.
//

#include <iostream>

#include "Logger.h"

void Logger::log(const std::string &msg) {
    std::clog << msg << std::endl;
}
