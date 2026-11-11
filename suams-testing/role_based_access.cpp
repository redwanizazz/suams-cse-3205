#include "role_based_access.h"

bool RoleBasedAccess::canAccess(
    const std::string& role,
    const std::string& action
) {
    if (role == "Student") {
        return action == "RegisterCourse" ||
               action == "ViewResult";
    }

    if (role == "Teacher") {
        return action == "EnterMarks" ||
               action == "ProvideAdvising";
    }

    if (role == "DepartmentAdmin") {
        return action == "ManageCourses" ||
               action == "ManageStudentRecords";
    }

    if (role == "ExamController") {
        return action == "ApproveResult" ||
               action == "PublishResult";
    }

    return false;
}