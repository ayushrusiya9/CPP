#include<iostream>
using namespace std;

int main()
{
    // int n = 0;

    // for(int i = 1; i <= 50; i++)
    // {
    //     n = n + i;
    // }
    // cout<<n;

    int n;
    cin>>n;

    for(int i = 1; n >= i; i++)
    {
         if(n % i == 0)
         {
            cout<<i<<"\n";
         }
    }
}