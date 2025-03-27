#include<iostream>
using namespace std;

int main()
{
   int n, r = 0, k;
   cout<<"Enter number\n";
   cin>>n;
   k==n;

   while(n > 0)
   {
    r = r * 10 + n % 10;
    n = n / 10;
   }

   if(r == k){
    cout<<"palindrome";
   }
   else{
    cout<<"Not";
   }
}
