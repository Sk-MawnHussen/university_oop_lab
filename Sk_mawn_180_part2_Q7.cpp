
#include<iostream>
using namespace std;
class University
{
public:
    void displayUniversityinfo()
    {
      cout<<"BUBT"<<endl;
    }


};

class Deperment:public University

{


public:

    void depermentinfo()
    {
        cout<<"CSE"<<endl;
    }


};

class Student: public Deperment
   {

public:
    int id;
    string name;
    void studentInfo(int a,string b)
    {
        name=b;
        id=a;
        cout<<id<<endl;
        cout<<name<<endl;
    }
};

int main()
{
    Student s1;
    s1.displayUniversityinfo();
    s1.depermentinfo();
    s1.studentInfo(12836,"mawn hussen");
    return 0;
}
