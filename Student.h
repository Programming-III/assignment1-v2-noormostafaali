#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here


class Student:Person 
private:
    string major;
    int yearlevel;
public:
    Student(){};
    Student(string m, int l) : Person();
    Student(string n, int i,string m, int l):Person(n,i);
    void display();
    string getName();
    ~Student();




#endif
