#include<iostream>
using namespace std;

int main()
{
    int a = 3, b = 4, c = 1;

    if(a > b && a > c)
    {
        cout<<a;
    }else if(b > a && b > c)
    {
        cout<<b;
    }else{
        cout<<c;

    }
}