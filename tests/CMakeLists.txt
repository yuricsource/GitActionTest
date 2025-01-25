# Google Test, using FetchContent
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)

FetchContent_MakeAvailable(googletest)

# Enable CTest
enable_testing()

# Create the test executable
add_executable(tests test_example.cpp)

# Link GTest libraries
target_link_libraries(tests
    PRIVATE
    gtest_main
    gtest
)

# Register the test with CTest
add_test(NAME MyTests COMMAND tests)
