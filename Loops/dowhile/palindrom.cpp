#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number\n";//121
    cin>>num;
    
    do
    {
        int a = num / 10;//12
        int b = num % 10;//1
    } while (num > 0);
    
}    