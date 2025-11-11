#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class Student:Person {
protected:
    string major;
    int yearlevel;
public:
    Student(){};
    Student(string m, int l) : Person();
    Student(string n, int i,string m, int l):Person(n,i);
    void display();
    string getName();
    ~Student();
};











#endif
