#include<iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cout<<"Enter number\n";
    cin>>n;

    for(n; n > 1; n--)
    {
        k = k * n;
    }
    
    cout<<"factorial = "<<k;
}