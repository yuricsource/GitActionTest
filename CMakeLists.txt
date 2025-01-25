cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Main application
add_executable(MyApp main.cpp)

# ------------------------------------------------------------------
# Test configuration within the same (root) CMakeLists.txt
# ------------------------------------------------------------------
enable_testing()

# Example: Fetch Google Test (optional approach)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
FetchContent_MakeAvailable(googletest)

# Create a test executable from the source in tests/test_example.cpp
add_executable(tests tests/test_example.cpp)
target_link_libraries(tests PRIVATE gtest_main gtest)

add_test(NAME MyTests COMMAND tests)
