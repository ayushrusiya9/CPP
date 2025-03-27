#include<iostream>
using namespace std;

int main()
{
    int a = 0, b = 1,c;
    cout<<a<<"\t"<<b<<"\t";
    
    int i = 1;
    while(i <= 4){
        c = a + b;
        a = b;
        b = c;
        cout<<c<<"\t";
        i++;
    }
    
}