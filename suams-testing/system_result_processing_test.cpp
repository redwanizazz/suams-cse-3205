#include <gtest/gtest.h>

#include "continuous_assessment.h"
#include "result_processing.h"

TEST(SystemResultProcessingTest, CompleteValidResultFlow) {

    // Step 1: Continuous assessment
    ContinuousAssessment assessment(
        20,   // CT
        10,   // Attendance
        10    // Assignment
    );

    // Step 2: Final exam
    int finalExam = 45;

    // Step 3: Calculate total marks
    int totalMarks = assessment.getTotal() + finalExam;

    EXPECT_EQ(totalMarks, 85);

    // Step 4: Example GPA processing
    ResultProcessing result;

    double gpa = result.calculateGPA(
        4.00, 3,
        3.50, 3
    );

    EXPECT_DOUBLE_EQ(gpa, 3.75);
}


TEST(SystemResultProcessingTest, FullMarksResultFlow) {

    ContinuousAssessment assessment(
        20,
        10,
        10
    );

    int finalExam = 60;

    int totalMarks = assessment.getTotal() + finalExam;

    EXPECT_EQ(totalMarks, 100);

    ResultProcessing result;

    EXPECT_DOUBLE_EQ(
        result.calculateGPA(
            4.00, 3,
            4.00, 3
        ),
        4.00
    );
}


TEST(SystemResultProcessingTest, ZeroAssessmentResultFlow) {

    ContinuousAssessment assessment(
        0,
        0,
        0
    );

    int finalExam = 50;

    int totalMarks = assessment.getTotal() + finalExam;

    EXPECT_EQ(totalMarks, 50);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}