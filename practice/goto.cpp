#include<iostream>
using namespace std;

int main()
{
 int n, i = 1;
 cout<<"enter any number\n";
 cin>>n;
cnt:
 cout<<n<< " x "<< i << " = "<<n * i<<"\n";
 i++;

 if(i <= 10)
 goto cnt;
}