#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    //int *p;
    int *ptr;
  //  p = &a;//reffrence
    ptr = &a;

    cout<<"Address of a" << &a <<"\n";
    cout<<*p;//derefference
    cout<<*ptr;
}
