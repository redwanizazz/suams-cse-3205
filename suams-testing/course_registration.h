#ifndef COURSE_REGISTRATION_H
#define COURSE_REGISTRATION_H

#include <string>

class CourseRegistration {
public:
    std::string registerCourse(
        bool studentActive,
        bool prerequisiteCompleted,
        int availableSeats,
        int currentCredits,
        int courseCredit
    );
};

#endif