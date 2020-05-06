cmake_minimum_required(VERSION 3.16)
project(Experimenting3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Experimenting3 main.cpp src/Clothing.cpp headers/Clothing.hpp src/Pants.cpp headers/Pants.hpp src/Shirt.cpp headers/Shirt.hpp src/Shoe.cpp headers/Shoe.hpp tests/tests-main.cpp tests/tests.cpp headers/catch.hpp src/Wardrobe.cpp headers/Wardrobe.hpp)