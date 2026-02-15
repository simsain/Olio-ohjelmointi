#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection){
        {
        case 0:{
            //cout<<"case0"<<endl;
            string nimi;
            cout<<"Opiskelijan nimi: "<<endl;
            cin>>nimi;
            int ika;
            cout<<"Opiskelijan ika: "<<endl;
            cin>>ika;
            Student newStudent(nimi, ika);
            studentList.push_back(newStudent);
            break;
        }

        case 1:
            //cout<<"\ncase1"<<endl;
            cout<<"Studentlist opiskelijoiden nimet: "<<endl;
            for (Student &s: studentList){
                cout<<"Opiskelija: "<< s.getName()<<endl;
            }
            break;

        case 2:
            //cout<<"\ncase2"<<endl;
            sort(studentList.begin(),studentList.end(),[](Student &eka, Student &toka)
            {
            return eka.getName() < toka.getName();
            }
            );
            cout<<"Opiskelijat aakkosjarjestyksessa"<<endl;
            for (Student &s: studentList){
                s.printStudentInfo();
            };
            break;

        case 3:
            //cout<<"\ncase3"<<endl;
            sort(studentList.begin(),studentList.end(),[] (Student &eka, Student &toka)
            {
                return eka.getAge() < toka.getAge();
            }
            );
            cout<<"Opiskelijat ian mukaan"<<endl;
            for(Student &s: studentList){
                s.printStudentInfo();
            };

            break;
        case 4:
            //cout<<"\ncase4"<<endl;

            cout<<"Hakemasi oppilaan nimi: "<<endl;
            string nimihaku;
            cin>>nimihaku;

            vector<Student>::iterator it = studentList.begin();
            it = find_if(studentList.begin(), studentList.end(),
                        [nimihaku](Student &s)
                        {
                             return s.getName() == nimihaku;
                        });
            if (it != studentList.end()){
                it->printStudentInfo();
            }else{
                cout<<"Hakemasi oppilas: "<<nimihaku<<" ei ole listalla"<<endl;
            }
            break;

        }

        default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;

        }

    } while(selection < 5);

    return 0;
}
