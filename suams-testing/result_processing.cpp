#include "result_processing.h"

double ResultProcessing::calculateGPA(
    double gradePoint1,
    int credit1,
    double gradePoint2,
    int credit2
) {
    int totalCredits = credit1 + credit2;

    if (totalCredits <= 0) {
        return 0.0;
    }

    return ((gradePoint1 * credit1) +
            (gradePoint2 * credit2)) / totalCredits;
}