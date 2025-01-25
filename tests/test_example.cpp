#include <gtest/gtest.h>

// A simple function to test
int add(int a, int b) {
    return a + b;
}

TEST(MathTests, AddFunction) {
    EXPECT_EQ(add(2, 2), 4);
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_NE(add(2, 2), 5);
}

// Standard main provided by gtest_main link library
// If you weren't linking gtest_main, you'd need:
// int main(int argc, char **argv) {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }