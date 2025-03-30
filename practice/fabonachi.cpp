// Print the Fibonacci sequence up to a specified limit
#include<iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cin>>n;

    for(int i = 1; i < n; i++)
    {
        cout<<a<<"\n";
        b =  a + b;
        a =  b - a;
    }
}