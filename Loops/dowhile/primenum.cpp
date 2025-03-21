#include<iostream>
using namespace std;

int main()
{
    int num, i=2;
    cout<<"Enter number\n";
    cin>>num;

    do{
        if(num % i == 0){
            cout<<"number is not a prime number\n";

        }
        else
        {
            cout<<"number is prime\n";
        }
        i++;
    }while(i * i <= num);
}
