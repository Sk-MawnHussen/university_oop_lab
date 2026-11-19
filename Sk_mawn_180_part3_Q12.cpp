#include<iostream>

using namespace std;
class Course
{
private:
    int courseId;
    string courseName;
public:
    void setter_Id(int a)
    {
        courseId=a;
    }
    void setter_Name(string a)
    {
        courseName=a;
    }
    int getter_Id()
    {
        return courseId;
    }
    string getter_Name()
    {
        return courseName;
    }
    virtual void displayCourseType()=0;
};
class TheoryCourse:public Course
{
    void displayCourseType()
    {
        cout<<"This is a Theory Course"<<endl;
    }
};
class LabCourse:public Course
{
    void displayCourseType()
    {
        cout<<"Tis is a Lab course"<<endl;
    }
};
int main()
{
    Course* ptr=new TheoryCourse();
    ptr->setter_Id(46234325);
    ptr->setter_Name("sk mawn hussen");
    cout<<ptr->getter_Id()<<endl<<ptr->getter_Name()<<endl;
    ptr->displayCourseType();
    cout<<endl;
    delete ptr;

    Course* pr=new LabCourse();
    pr->setter_Id(46234433);
    pr->setter_Name("mawn hussen");
    cout<<pr->getter_Id()<<endl<<pr->getter_Name()<<endl;
     pr->displayCourseType();
    delete pr;
    return 0;



}
