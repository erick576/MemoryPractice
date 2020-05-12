cmake_minimum_required(VERSION 3.16)
project(Deque)

set(CMAKE_CXX_STANDARD 20)

add_executable(Deque main.cpp test/test-main.cpp test/test1.cpp src/Deque.cpp header/Deque.hpp header/catch.hpp)