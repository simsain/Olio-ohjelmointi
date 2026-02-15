#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
public:
    Student(string s, int ika);

    void setAge(int uusika);
    void setName(string uusnimi);

    string getName();
    int getAge();

    void printStudentInfo();

private:
    string Name;
    int Age;

};

#endif // STUDENT_H
