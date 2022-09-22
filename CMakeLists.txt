cmake_minimum_required(VERSION 3.23)
project(Aufgaben)

set(CMAKE_CXX_STANDARD 11)

add_executable(Aufgaben main.cpp Stoppuhr/Stoppuhr.cpp Stoppuhr/Stoppuhr.hpp "Usefull stuff.hpp")
