#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class Instructor:Person 
private:
    string department;
    int experienceYears;
public:
    Instructor() {};
    Instructor(string n, int i, string m, int l):Person(n,i);
    void display();
    ~Instructor() ;













#endif
