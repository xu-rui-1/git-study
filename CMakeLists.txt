cmake_minimum_required(VERSION 3.0.0)
project(mymain VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g -std=c++11")
set(CMAKE_BUILD_TYPE "Degug")

add_subdirectory(./src)
