#include "student.h"


Student::Student(string s, int ika)
{
    Name = s;
    Age = ika;
}

void Student::setAge(int uusika)
{
    Age = uusika;
}

void Student::setName(string uusnimi)
{
    Name = uusnimi;
}


string Student::getName()
{
    return Name;

}


int Student::getAge()
{
    return Age;
}



void Student::printStudentInfo()
{
    cout<<"Opiskelijan nimi: "<<Name<<" | Opiskelijan ika: "<<Age<<endl;
}

