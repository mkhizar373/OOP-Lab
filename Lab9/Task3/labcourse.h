#ifndef LABCOURSE_H
#define LABCOURSE_H

#include "course.h"

class LabCourse : public Course {
private:
    float performance;
    float labExam;
    float grade;

public:
    LabCourse(string code, int crd, float perf, float exam);
    void calculateGrade();
    void displayInfo();
};

#endif
