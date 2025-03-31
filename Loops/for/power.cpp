//wap to find out the power
#include<iostream>
using namespace std;

int main()
{
  int b,p,k=1;
  cout<<"Enter base \n";
  cin>>b;
  cout<<"Enter power \n";
  cin>>p;

  for (int i = 0; i < p; i++) 
  {
    k = k * b;   
 }

 cout<<k;
}