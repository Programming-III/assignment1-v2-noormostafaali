#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

using namespace std;

class Person{
private:
    string name;
    int id;
    public:
    Person() {
        name="";
        id=0;
    }
    Person::Person(string n, int i) {
        name = n;
        id = i;
    }
     Person:: void display() {
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
     Person::string getName() {
        return name;
    }
    ~Person() {}
};

class Student:Person {
private:
    string major;
    int yearlevel;
public:
    Student::Student(){}
    Student:: Student(string m, int l) : Person() {
        major = m;
        yearlevel = l;
    }
    Student:: Student(string n, int i,string m, int l):Person(n,i) {
        major = m;
        yearlevel = l;
    }


     Student::void display() {
        Person::display();
        cout<<"major: "<<major<<endl;
        cout<<"yearlevel: "<<yearlevel<<endl;

    }

     Student::string getName(){
        string k = Person::getName();
        return k;
    }
    ~Student() {}
};

class Instructor:Person {
private:
    string department;
    int experienceYears;
public:
   Instructor:: Instructor() {}
    Instructor:: Instructor(string n, int i, string m, int l):Person(n,i) {
        department=m;
        experienceYears = l;
    }
    Instructor:: void display() {
        Person::display();
        cout<<"department: "<<department<<endl;
        cout<<"experience: "<<experienceYears<<endl;
    }
    ~Instructor() {}
};

//b)

class Course {
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student *students;
    int currentStudent;

    public:
  Course::  Course( string c, string n, int m) {
        courseCode = c;
        courseName = n;
        maxStudents = m;
        currentStudent = 0;
        this->students= new Student[m];
    }

   Course::void addStudent(const Student& s) {
        if (currentStudent==maxStudents) {
            cout<<"maxStudents exceeded"<<endl;
            return;
        }
        students[currentStudent] = s;
        currentStudent++;

    }
    Course::void display() {
        cout<<"courseCode: "<<courseCode<<endl;
        cout<<"courseName: "<<courseName<<endl;
        cout<<"maxStudents: "<<maxStudents<<endl;
        cout<<"currentStudent: "<<currentStudent<<endl;

        for (int i=0;i<currentStudent;i++) {
            cout<<"studentname : "<<students[i].getName()<<endl;
        }
    }

    ~Course() {}

};

    // TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Student *s1= new Student("noor",16001618,"cs",2);
    Instructor *i1= new Instructor("yara",81,"cs",4);
    Course *c1= new Course("101", "prog", 10);

    s1->display();
    i1->display();
    c1->display();

    return 0;
};
