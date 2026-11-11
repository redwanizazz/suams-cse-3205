#include "course_registration.h"

std::string CourseRegistration::registerCourse(
    bool studentActive,
    bool prerequisiteCompleted,
    int availableSeats,
    int currentCredits,
    int courseCredit
) {
    if (!studentActive) {
        return "Inactive Student";
    }

    if (!prerequisiteCompleted) {
        return "Prerequisite Missing";
    }

    if (availableSeats <= 0) {
        return "No Seat Available";
    }

    if (currentCredits + courseCredit > 21) {
        return "Credit Limit Exceeded";
    }

    return "Registration Successful";
}