cmake_minimum_required(VERSION 3.28)
project(exam C)

set(CMAKE_C_STANDARD 11)

add_library(exam STATIC library.c)
