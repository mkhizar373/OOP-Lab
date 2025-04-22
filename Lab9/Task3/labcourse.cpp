#include <iostream>
#include "labcourse.h"
using namespace std;

LabCourse::LabCourse(string code, int crd, float perf, float exam) : Course(code, crd) {
    performance=perf;
    labExam=exam;
    grade=0;
}

void LabCourse::calculateGrade() {
    grade=(performance*0.5)+(labExam*0.5);
}

void LabCourse::displayInfo() {
    cout<<"Lab Course: "<<courseCode<<endl;
    cout<<"Credits: "<<credits<<endl;
    cout<<"Final Grade: "<<grade<<endl;
}
