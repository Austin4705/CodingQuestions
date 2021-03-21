cmake_minimum_required(VERSION 3.16)
project(PolynomialCalculator)

set(CMAKE_CXX_STANDARD 14)


add_executable(PolynomialCalculator main.cpp src/parser.cpp src/checker.cpp src/mathblock.cpp src/mathblock.h)