#include <iostream>
#include "lecturecourse.h"
using namespace std;

LectureCourse::LectureCourse(string code, int crd, float mid, float fin) : Course(code, crd) {
    midterm=mid;
    finalExam=fin;
    grade=0;
}

void LectureCourse::calculateGrade() {
    grade=(midterm*0.4)+(finalExam*0.6);
}

void LectureCourse::displayInfo() {
    cout<<"Lecture Course: "<<courseCode<<endl;
    cout<<"Credits: "<<credits<<endl;
    cout<<"Final Grade: "<<grade<<endl;
}
