#include<iostream>
using namespace std;

int main()
{

    int n = 10, i = 1, sum = 0;

    while(i <= n)
    {
        // cout<<i;
        sum = sum + i;
        i = i + 2;
    }
    cout<<sum;
}