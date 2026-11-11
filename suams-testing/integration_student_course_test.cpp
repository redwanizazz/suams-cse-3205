#include <gtest/gtest.h>

#include "student_information.h"
#include "course_registration.h"

TEST(IntegrationTest, ValidStudentRegistration) {
    StudentInformation student(
        true,
        true,
        15
    );

    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(
            student.isActive,
            student.prerequisiteCompleted,
            5,
            student.currentCredits,
            3
        ),
        "Registration Successful"
    );
}

TEST(IntegrationTest, MissingPrerequisiteFromStudentModule) {
    StudentInformation student(
        true,
        false,
        15
    );

    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(
            student.isActive,
            student.prerequisiteCompleted,
            5,
            student.currentCredits,
            3
        ),
        "Prerequisite Missing"
    );
}

TEST(IntegrationTest, InactiveStudentFromStudentModule) {
    StudentInformation student(
        false,
        true,
        15
    );

    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(
            student.isActive,
            student.prerequisiteCompleted,
            5,
            student.currentCredits,
            3
        ),
        "Inactive Student"
    );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}