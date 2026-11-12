#include<iostream>
using namespace std;
class Student
{
private:
    int studentId;
    string studentName;
    double cgpa;

public:
    void setter_1(int studentId)
    {
        this->studentId=studentId;
    }

    void setter_2(string studentName)
    {
        this->studentName=studentName;
    }
    void setter_3(double cgpa)
    {
        this->cgpa=cgpa;
    }
    int getter_1()
    {
        return studentId;
    }
   string getter_2()
    {
        return studentName;
    }
    double getter_3()
    {
        return cgpa;
    }

};
int main()
{
    Student s1;
    s1.setter_1(2092479);
    s1.setter_2("mawn hussen");
    s1.setter_3(3.70);
  cout<<s1.getter_1()<<endl;
  cout<<s1.getter_2()<<endl;
  cout<<s1.getter_3()<<endl;

}


