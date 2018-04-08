cmake_minimum_required(VERSION 3.10)
project(Test_CI_CPP)

set(CMAKE_CXX_STANDARD 11)

add_executable(Test_CI_CPP main.cpp Logger.cpp Logger.h)