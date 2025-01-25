cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Main application
add_executable(MyApp main.cpp)

# Optionally, include tests subdirectory
# This will look for tests/CMakeLists.txt
add_subdirectory(tests)
