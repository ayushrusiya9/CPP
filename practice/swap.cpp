//Write a program to swap the values of two variables
#include<iostream>
using namespace std;

int main()
{
   int a = 5, b = 10;
   a = a + b;
   b = a - b;
   a = a - b;
   cout<<a<<"\n"<<b;
    
}