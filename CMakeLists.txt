cmake_minimum_required(VERSION 3.12)
project(Temp)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add executable target
add_executable(Temp main.cpp TempConverter.cpp TempConverter.h)
