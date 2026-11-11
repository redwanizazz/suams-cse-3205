#include <gtest/gtest.h>
#include "role_based_access.h"

TEST(SystemRoleAccessTest, StudentAllowedActions) {
    RoleBasedAccess access;

    EXPECT_TRUE(
        access.canAccess("Student", "RegisterCourse")
    );

    EXPECT_TRUE(
        access.canAccess("Student", "ViewResult")
    );
}

TEST(SystemRoleAccessTest, StudentCannotModifyResults) {
    RoleBasedAccess access;

    EXPECT_FALSE(
        access.canAccess("Student", "ApproveResult")
    );

    EXPECT_FALSE(
        access.canAccess("Student", "PublishResult")
    );
}

TEST(SystemRoleAccessTest, TeacherAllowedActions) {
    RoleBasedAccess access;

    EXPECT_TRUE(
        access.canAccess("Teacher", "EnterMarks")
    );

    EXPECT_TRUE(
        access.canAccess("Teacher", "ProvideAdvising")
    );
}

TEST(SystemRoleAccessTest, ExamControllerAllowedActions) {
    RoleBasedAccess access;

    EXPECT_TRUE(
        access.canAccess(
            "ExamController",
            "ApproveResult"
        )
    );

    EXPECT_TRUE(
        access.canAccess(
            "ExamController",
            "PublishResult"
        )
    );
}

TEST(SystemRoleAccessTest, UnknownRoleRejected) {
    RoleBasedAccess access;

    EXPECT_FALSE(
        access.canAccess(
            "Unknown",
            "RegisterCourse"
        )
    );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}