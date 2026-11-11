#include "marks_validation.h"

std::string MarksValidation::validateMarks(int marks) {
    if (marks < 0 || marks > 100) {
        return "Invalid Marks";
    }

    return "Valid Marks";
}