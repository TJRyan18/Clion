cmake_minimum_required(VERSION 3.14)
project(Clion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Clion
        Account.h
        AccountTest.cpp)
