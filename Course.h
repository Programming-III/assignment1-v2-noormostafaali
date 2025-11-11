#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

class Course 
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student *students;
    int currentStudent;

    public:
    Course( string c, string n, int m) ;
   void addStudent(const Student& s) ;
    void display();
    ~Course() {}














#endif
