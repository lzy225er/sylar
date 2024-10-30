cmake_minimum_required(VERSION 2.8)
project(sylar)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} - rdynamic -o3 -g -std=c++11 - wall - Wno-deprecated -Werror -Wno-unused-fucyion")

set(LIB_SRC
    sylar/log.cc
    )

add_library(sylar SHARED ${LIB_SRC})