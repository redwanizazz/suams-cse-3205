#include <gtest/gtest.h>
#include "marks_validation.h"

TEST(BlackBoxMarksTest, InvalidLowerPartition) {
    MarksValidation validator;

    EXPECT_EQ(
        validator.validateMarks(-5),
        "Invalid Marks"
    );
}

TEST(BlackBoxMarksTest, ValidPartition) {
    MarksValidation validator;

    EXPECT_EQ(
        validator.validateMarks(75),
        "Valid Marks"
    );
}

TEST(BlackBoxMarksTest, InvalidUpperPartition) {
    MarksValidation validator;

    EXPECT_EQ(
        validator.validateMarks(105),
        "Invalid Marks"
    );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}