#include<iostream>
using namespace std;
class Smartphone
{
public:
    virtual void takeselfie()=0;
    virtual void makecall()=0;
};
class Andriod:public Smartphone
{
public:
    void takeselfie()
    {

        cout<<"Android Selfie"<<endl;
    }
    void makecall()
    {
        cout<<"Android Call"<<endl;
    }
};
class Iphone:public Smartphone
{
public:
    void takeselfie()
    {

        cout<<"Iphone Selfie"<<endl;
    }
    void makecall()
    {
        cout<<"Iphone  Call"<<endl;
    }
};
int main()
{
    Smartphone* pt = new Andriod();
    pt->makecall();
    pt->takeselfie();
    delete pt;
    Smartphone* ps = new Iphone();
    ps->makecall();
    ps->takeselfie();
    delete ps;
    return 0;
}

