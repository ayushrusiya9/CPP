/* Compute the factorial of a given number.
Formula:
n! = n × (n-1) × (n-2) × ... × */
#include<iostream>
using namespace std;

int main()
{
   int n,k= 1;
   cout<<"enter num\n";
   cin>>n;

   for(n; n>1;n--)
   {
    k = k*n;
   }
   cout<<k;

}