cmake_minimum_required(VERSION 3.13.4)

project(tamachan)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(external)

add_executable(tamachan tamachan.cpp)
