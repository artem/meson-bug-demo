cmake_minimum_required(VERSION 3.13...3.27 FATAL_ERROR)
project(meow VERSION 4 LANGUAGES C)

add_library(libmeow meow.c)

target_include_directories(libmeow PRIVATE private-include PUBLIC public-include)
