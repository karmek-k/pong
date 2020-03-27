cmake_minimum_required(VERSION 3.15)
project(pong)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp Game.cpp Game.h GameObject.cpp GameObject.h)

find_library(SFML REQUIRED)

add_executable(pong ${SOURCE_FILES})
target_link_libraries(pong sfml-system sfml-window sfml-graphics)