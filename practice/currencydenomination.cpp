#include<iostream>
using namespace std;

int main()
{
    int five = 5;
    int ten = 10;
    int twenty = 20;
    int fifty = 50;
    int hundred = 100;
    int fivehndr = 500;

    int amount;
    cout<<"Enter Amount: ";
    cin>>amount;

    if(amount / 500 == 8){
        cout<<fivehndr<<" x " << " 8 ";
    }

}
