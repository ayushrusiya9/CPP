// Find and print all factors of a given number.
#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter number\n";
    cin>>n;
    
    for(int i = 1; n >= i; i++)
    {
        if(n % i == 0)
        {
            cout<<i<<"\n";
        }
    }
    
}