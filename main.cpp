#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
#include<iostream>;


#include <string>
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
    Person(string n, int i) {
        name = n;
        id = i;
    }
     void display() {
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
    string getName() {
        return name;
    }
    ~Person() {}
};

class Student:Person {
protected:
    string major;
    int yearlevel;
public:
    Student(){}
    Student(string m, int l) : Person() {
        major = m;
        yearlevel = l;
    }
    Student(string n, int i,string m, int l):Person(n,i) {
        major = m;
        yearlevel = l;
    }


    void display() {
        Person::display();
        cout<<"major: "<<major<<endl;
        cout<<"yearlevel: "<<yearlevel<<endl;

    }

    string getName(){
        string k = Person::getName();
        return k;
    }
    ~Student() {}
};
class Instructor:Person {
protected:
    string department;
    int experienceYears;
public:
    Instructor() {}
    Instructor(string n, int i, string m, int l):Person(n,i) {
        department=m;
        experienceYears = l;
    }
    void display() {
        Person::display();
        cout<<"department: "<<department<<endl;
        cout<<"experience: "<<experienceYears<<endl;
    }
    ~Instructor() {}
};

//b)

class Course {
    protected:
    string courseCode;
    string courseName;
    int maxStudents;
    Student *students;
    int currentStudent;

    public:
    Course( string c, string n, int m) {
        courseCode = c;
        courseName = n;
        maxStudents = m;
        currentStudent = 0;
        this->students= new Student[m];
    }

   void addStudent(const Student& s) {
        if (currentStudent==maxStudents) {
            cout<<"maxStudents exceeded"<<endl;
            return;
        }
        students[currentStudent] = s;
        currentStudent++;

    }
    void display() {
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
