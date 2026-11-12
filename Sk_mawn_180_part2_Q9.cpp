#include<iostream>
using namespace std;
class Vehicle
{
public:
    void vehicleInfo()
    {
      cout<<"This is Vehicle"<<endl;
    }


};
class Fare
{
    public:
    void fareInfo()
    {
        cout<<"150 taka fare"<<endl;
    }
};

class Car:public Vehicle

{


public:


    void carinfo()
    {

        cout<<"this is a car"<<endl;
    }


};

class Bus:public Vehicle,public Fare
{
public:

   void busInfo()
    {


        cout<<"this is a bus"<<endl;
    }
};

int main()
{
    Car c1;
    c1.vehicleInfo();
    c1.carinfo();
    Bus b1;
    b1.vehicleInfo();
    b1.fareInfo();
    b1.busInfo();
    return 0;
}
