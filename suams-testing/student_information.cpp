#include "student_information.h"

StudentInformation::StudentInformation(
    bool active,
    bool prerequisite,
    int credits
) {
    isActive = active;
    prerequisiteCompleted = prerequisite;
    currentCredits = credits;
}