#include <gtest/gtest.h>
#include "course_registration.h"

TEST(CourseRegistrationTest, SuccessfulRegistration) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, true, 5, 15, 3),
        "Registration Successful"
    );
}

TEST(CourseRegistrationTest, InactiveStudent) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(false, true, 5, 15, 3),
        "Inactive Student"
    );
}

TEST(CourseRegistrationTest, MissingPrerequisite) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, false, 5, 15, 3),
        "Prerequisite Missing"
    );
}

TEST(CourseRegistrationTest, NoAvailableSeat) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, true, 0, 15, 3),
        "No Seat Available"
    );
}

TEST(CourseRegistrationTest, CreditLimitExceeded) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, true, 5, 19, 3),
        "Credit Limit Exceeded"
    );
}

TEST(CourseRegistrationTest, CreditBoundary20) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, true, 5, 17, 3),
        "Registration Successful"
    );
}

TEST(CourseRegistrationTest, CreditBoundary21) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, true, 5, 18, 3),
        "Registration Successful"
    );
}

TEST(CourseRegistrationTest, CreditBoundary22) {
    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, true, 5, 19, 3),
        "Credit Limit Exceeded"
    );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}