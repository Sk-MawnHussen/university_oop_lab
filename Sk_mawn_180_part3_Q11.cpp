#include<iostream>
using namespace std;
class Payment
{
public:
    virtual void processPayment()=0;

};
class CreditCardPayment:public Payment
{
public:
   void processPayment()
    {
        cout<<"payment by credit card"<<endl;
    }
};
class MobileBankingpayment:public Payment
{
    void processPayment()
    {
        cout<<"payment by mobile banking"<<endl;
    }
};
int main()
{
    Payment* p1=new CreditCardPayment();
    p1->processPayment();
    delete p1;
    Payment*p2=new MobileBankingpayment();
    p2->processPayment();
    delete p2;
    return 0;
}
