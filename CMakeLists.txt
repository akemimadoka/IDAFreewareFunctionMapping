cmake_minimum_required(VERSION 3.0)

project(Chino CXX)

add_library(Chino SHARED Dummy.cpp Mapping.h)
target_include_directories(Chino PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
