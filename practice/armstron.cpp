// Check if a given 3-digit number (e.g., 153) is an Armstrong number.
#include<iostream>
using namespace std;

int main()
{
    int n,a,b = 0,k = 0;
    cout<<"Enter number\n";//153
    cin>>n;
    // k = n;
    while(n > 0)
    {
      a = n % 10;
      b = b + (a * a * a);
      n = n / 10;
    }
 cout<<b;
   /* if (k == b)
    {
        cout<<"Number is armstrom\n";
    }
    else
    {
        cout<<"Not armstrom\n";
    }
    */
    
}