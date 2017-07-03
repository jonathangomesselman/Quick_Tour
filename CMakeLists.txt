cmake_minimum_required(VERSION 3.7)
project(Quick_Tour)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Monster.cpp Monster.h)
add_executable(Quick_Tour ${SOURCE_FILES})