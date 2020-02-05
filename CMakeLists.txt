cmake_minimum_required(VERSION 3.15)
project(CLION_BOILERPLATE C)

set(CMAKE_C_STANDARD 99)

add_executable(
        CLION_BOILERPLATE
        src/main.c
        include/myLibrary.h lib/myLibrary.c)
