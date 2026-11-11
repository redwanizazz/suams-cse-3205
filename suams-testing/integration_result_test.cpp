#include <gtest/gtest.h>
#include "continuous_assessment.h"

TEST(IntegrationResultTest, ValidAssessmentAndFinalExam) {
    ContinuousAssessment assessment(
        20,   // CT
        10,   // Attendance
        10    // Assignment
    );

    int finalExam = 45;

    int total = assessment.getTotal() + finalExam;

    EXPECT_EQ(total, 85);
}

TEST(IntegrationResultTest, ZeroContinuousAssessment) {
    ContinuousAssessment assessment(
        0,
        0,
        0
    );

    int finalExam = 50;

    int total = assessment.getTotal() + finalExam;

    EXPECT_EQ(total, 50);
}

TEST(IntegrationResultTest, FullMarksCombination) {
    ContinuousAssessment assessment(
        20,
        10,
        10
    );

    int finalExam = 60;

    int total = assessment.getTotal() + finalExam;

    EXPECT_EQ(total, 100);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}