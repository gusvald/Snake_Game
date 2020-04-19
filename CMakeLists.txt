cmake_minimum_required(VERSION 3.15)
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

set(CMAKE_CXX_STANDARD 14)

project(snake_MW_CZ15_253048)

set(CMAKE_CXX_FLAGS "-Wall -Wextra")

enable_testing()

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

