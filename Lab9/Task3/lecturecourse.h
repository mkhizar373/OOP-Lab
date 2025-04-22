#ifndef LECTURECOURSE_H
#define LECTURECOURSE_H

#include "course.h"

class LectureCourse : public Course {
private:
    float midterm;
    float finalExam;
    float grade;

public:
    LectureCourse(string code, int crd, float mid, float fin);
    void calculateGrade();
    void displayInfo();
};

#endif
