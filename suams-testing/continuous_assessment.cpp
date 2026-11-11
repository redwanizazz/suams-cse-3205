#include "continuous_assessment.h"

ContinuousAssessment::ContinuousAssessment(
    int ctMark,
    int attendanceMark,
    int assignmentMark
) {
    ct = ctMark;
    attendance = attendanceMark;
    assignment = assignmentMark;
}

int ContinuousAssessment::getTotal() const {
    return ct + attendance + assignment;
}