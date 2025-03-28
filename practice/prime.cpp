// Write a program to find all prime numbers between 1 and 20.
#include<iostream>
using namespace std;

int main()
{
    int n = 3, k = 0, flag = 0;  
    for(n; n <= 20; n++)
    {
        k = n - 1;
        for(k; k > 1; k--)
        {
            if(n % k == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<n<<"\n";
        }
        flag = 0;
    }
}