#include<iostream>
using namespace std;

int main()
{
    int n, i, c = 0;
    cin>>n;
    
    for(i;  n >= i; i++)
    {
        if(i % n == 0){
             c++;
        }
    }
    if(c == 2)
    {
        cout<<"prime\n";
    }
    else
    {
        cout<<"not";
    }
}