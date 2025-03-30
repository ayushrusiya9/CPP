#include<iostream>
using namespace std;

int main()
{
  /*int k = 1;   
  for(int r = 1; r <= 3; r++)
  {
    for(int c = 1; c <= r; c++)
    {
        cout<<k*k<<" ";
        // cout<<k<<" ";
        cout<<c<<" ";
        // cout<<c<<"\t";
        // cout<<"*"<<"\t";
        k++;
    }
    cout<<"\n";
  }*/

  int k = 1;   
  for(char r = 'a'; r <= 'c'; r++)
  {
    for(char c = 'a'; c <= r; c++)
    {
        // cout<<k*k<<" ";
        // cout<<k<<" ";
        cout<<c<<" ";
        // cout<<r<<" ";
        // cout<<"*"<<"\t";
        // k++;
    }
    cout<<"\n";
  }


}