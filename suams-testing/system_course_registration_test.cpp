#include <gtest/gtest.h>

#include "student_information.h"
#include "course_registration.h"

TEST(SystemCourseRegistrationTest, CompleteSuccessfulRegistrationFlow) {

    // Step 1: Student information
    StudentInformation student(
        true,   // active
        true,   // prerequisite completed
        15      // current credits
    );

    // Step 2: Course information
    int availableSeats = 5;
    int courseCredit = 3;

    // Step 3: Registration process
    CourseRegistration course;

    std::string result = course.registerCourse(
        student.isActive,
        student.prerequisiteCompleted,
        availableSeats,
        student.currentCredits,
        courseCredit
    );

    // Step 4: Verify final system result
    EXPECT_EQ(
        result,
        "Registration Successful"
    );
}


TEST(SystemCourseRegistrationTest, RegistrationRejectedForMissingPrerequisite) {

    StudentInformation student(
        true,
        false,
        15
    );

    CourseRegistration course;

    std::string result = course.registerCourse(
        student.isActive,
        student.prerequisiteCompleted,
        5,
        student.currentCredits,
        3
    );

    EXPECT_EQ(
        result,
        "Prerequisite Missing"
    );
}


TEST(SystemCourseRegistrationTest, RegistrationRejectedForCreditLimit) {

    StudentInformation student(
        true,
        true,
        19
    );

    CourseRegistration course;

    std::string result = course.registerCourse(
        student.isActive,
        student.prerequisiteCompleted,
        5,
        student.currentCredits,
        3
    );

    EXPECT_EQ(
        result,
        "Credit Limit Exceeded"
    );
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}