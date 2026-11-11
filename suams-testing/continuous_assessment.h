#ifndef CONTINUOUS_ASSESSMENT_H
#define CONTINUOUS_ASSESSMENT_H

class ContinuousAssessment {
public:
    int ct;
    int attendance;
    int assignment;

    ContinuousAssessment(
        int ctMark,
        int attendanceMark,
        int assignmentMark
    );

    int getTotal() const;
};

#endif