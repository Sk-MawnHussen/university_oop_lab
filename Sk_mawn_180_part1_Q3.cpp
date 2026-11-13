#include<iostream>
using namespace std;
class Shape
{
protected:
    int dimension;
    public:
    virtual void calculateArea()=0;
};
class Squre:public Shape
{
  public:


        void calculateArea()
    {
        cout<<"enter dimension :";
        cin>>dimension;


        cout<<"calculate area of squre :"<<dimension*dimension<<endl;
    }
};
class Circle:public Shape
{
   public:
        void calculateArea()
    {
        cout<<"enter radius";
        cin>>dimension;

        cout<<"calculate area of circle :"<<dimension*dimension*3.14<<endl;
    }
};
int main()
{
    Squre s1;
    s1.calculateArea();
    Circle s2;
    s2.calculateArea();
    return 0;
}
