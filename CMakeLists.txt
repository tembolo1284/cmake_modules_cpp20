cmake_minimum_required(VERSION 3.20)
project(YourProjectName VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_COMPILER "g++")
#set(CMAKE_CXX_COMPILER "clang++")
#set(CMAKE_CXX_COMPILER "cl.exe")

add_subdirectory(src)
add_subdirectory(lib)