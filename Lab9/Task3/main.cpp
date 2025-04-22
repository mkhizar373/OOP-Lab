#include <iostream>
#include "lecturecourse.h"
#include "labcourse.h"
using namespace std;

int main() {
    Course* course1 = new LectureCourse("CS1001", 3, 70, 75);
    Course* course2 = new LabCourse("CL1001", 1, 85, 80);

    course1->calculateGrade();
    course1->displayInfo();

    cout<<endl;

    course2->calculateGrade();
    course2->displayInfo();

    delete course1;
    delete course2;

    return 0;
}
