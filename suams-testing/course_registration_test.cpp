#include <gtest/gtest.h>
#include "course_registration.h"

TEST(CourseRegistrationTest, SuccessfulRegistration) {

    CourseRegistration course;

    EXPECT_EQ(
        course.registerCourse(true, true, 5, 15, 3),
        "Registration Successful"
    );
}

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}