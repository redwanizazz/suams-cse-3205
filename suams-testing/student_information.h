#ifndef STUDENT_INFORMATION_H
#define STUDENT_INFORMATION_H

class StudentInformation {
public:
    bool isActive;
    bool prerequisiteCompleted;
    int currentCredits;

    StudentInformation(
        bool active,
        bool prerequisite,
        int credits
    );
};

#endif