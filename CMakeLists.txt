cmake_minimum_required(VERSION 3.21)
project(Animals)

set(CMAKE_CXX_STANDARD 14)

add_executable(Animals Lab7.cpp Animal.cpp Animal.h Owl.cpp Owl.h Frog.cpp Frog.h)
