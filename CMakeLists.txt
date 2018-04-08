cmake_minimum_required(VERSION 3.9.2)
project(Test-CI-CPP)
include(gtest.cmake)
find_package (Threads)


set(CMAKE_CXX_STANDARD 11)
SET(COVERAGE OFF CACHE BOOL "Coverage")


add_executable(Test_CI_CPP main.cpp Logger.cpp Logger.h)

add_executable(Tests Logger.cpp tests/logger_tests.cpp)
target_link_libraries(Tests PRIVATE gtest ${CMAKE_THREAD_LIBS_INIT})


if (MSVC)
    add_definitions(-DGTEST_HAS_TR1_TUPLE=0)
else()
    if (COVERAGE)
        target_compile_options(Tests PRIVATE --coverage)
        target_link_libraries(Tests PRIVATE --coverage)
    endif()
endif()