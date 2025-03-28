//Determine if a given number (e.g., 121, 2442) is a palindrome (reads the same backward)
#include<iostream>
using namespace std;

int main()
{
    int n,orig,rev = 0;
    cout<<"Enter number\n";//121
    cin>>n;
    orig = n;
    for(n; n > 0; n){
        rev = ( rev * 10)+(n % 10);
        n = n / 10;
    }

    cout<<rev<<"\n";

    if(orig == rev)
    {
        cout<<"Number is palindrome\n";
    }
    else
    {
         cout<<"Number is not palindrome";
    }
}