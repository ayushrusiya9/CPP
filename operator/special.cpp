#include<iostream>
using namespace std;

//int b = 99;//global veriable
int main()
{
  //int b =20;
 // {

    //int b = 90;//local veriable
   // cout<<::b;
 // }

  int a = 10;// a is anormal veriable
  int &b = a;//b is A REFFERENCE veriable

  cout<<"a="<<a<<"\n";
  cout<<"b="<<b<<"\n";

  cout<<"Address of a = "<<&a<<"\n";//& addrrss of veriable of a
  cout<<"Address of b = "<<&b<<"\n";//address veriable of b

  b = 90;
  cout<<"a = " <<a << "\n";
  cout<<"b = " <<b << "\n";
}
