#include<iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;

void displayInfo(string n,int a)
{
    name=n;
    age=a;
    cout<<"Name :"<<name<<endl;
    cout<<"Age :"<<age<<endl;
}


};

class Employee:public Person
{
public:
    int employeeId;
    double salary;
   void displayEmployeeInfo(int a,double s)
    {
        employeeId=a;
        salary=s;

        cout<<"Employee Id :"<<employeeId<<endl;
        cout<<"salary"<<salary<<endl;
    }
};

int main()
{
  Employee em;
  em.displayInfo("mawn hussen",20);
  em.displayEmployeeInfo(201973,21573.2);
}
