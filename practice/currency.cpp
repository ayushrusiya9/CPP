//Simulate an ATM that dispenses money using the minimum number of notes (INR5, INR10,
 //INR20, INR50, INR100, INR500)
#include<iostream>
using namespace std;

int main()
{
    int amount, rs5 = 0, rs10 = 0, rs20 =  0,rs50 = 0, rs100 = 0, rs500 = 0;
    cout<<"enter amount\n";
    cin>>amount;

    if(amount >= 500)
    {
        rs500 = amount/500;
        amount = amount%500;
    }
    if(amount >= 100)
    {
        rs100 = amount/100;
        amount = amount%100;
    }
    if(amount >= 50)
    {
        rs50 = amount/50;
        amount = amount%50;
    }
    if(amount >= 20)
    {
        rs20 = amount/20;
        amount = amount%20;
    }
    if(amount >= 10)
    {
        rs10 = amount/10;
        amount = amount%10;
    }
    cout<<"500"<<" = "<<rs500<<"\n";
    cout<<"100"<<" = "<<rs100<<"\n";
    cout<<"50"<<" = "<<rs50<<"\n";
    cout<<"20"<<" = "<<rs20<<"\n";
    cout<<"10"<<" = "<<rs10<<"\n";
}