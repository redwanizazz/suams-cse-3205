#include <gtest/gtest.h>
#include "result_processing.h"

TEST(ResultProcessingTest, NormalGPA) {
    ResultProcessing result;

    EXPECT_DOUBLE_EQ(
        result.calculateGPA(4.00, 3, 3.50, 3),
        3.75
    );
}

TEST(ResultProcessingTest, FullGPA) {
    ResultProcessing result;

    EXPECT_DOUBLE_EQ(
        result.calculateGPA(4.00, 3, 4.00, 3),
        4.00
    );
}

TEST(ResultProcessingTest, ZeroTotalCredits) {
    ResultProcessing result;

    EXPECT_DOUBLE_EQ(
        result.calculateGPA(4.00, 0, 3.50, 0),
        0.0
    );
}

TEST(ResultProcessingTest, UnequalCredits) {
    ResultProcessing result;

    EXPECT_DOUBLE_EQ(
        result.calculateGPA(4.00, 3, 3.00, 1),
        3.75
    );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}