#include<iostream>
using namespace std;
class Bankaccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance=0;

public:
    void setter_1(int a)
    {
        this->accountNumber=a;
    }

    void setter_2(string ah)
    {
        accountHolder=ah;
    }
    void setter_3(double bal)
    {
        if(bal>0)
        {

            balance=bal;
        }
        else
        {
            cout<<"error Amount"<<endl;
        }
    }

    int getter_1()
    {
        return accountNumber;
    }
    string getter_2()
    {
        return accountHolder;
    }
    double getter_3()
    {


            return balance;



    }

};
int main()
{
    Bankaccount s1;
    s1.setter_1(20924349);
    s1.setter_2("mawn hussen");
    s1.setter_3(-17376);
    cout<<s1.getter_1()<<endl;
    cout<<s1.getter_2()<<endl;
    cout<<s1.getter_3()<<endl;

}
