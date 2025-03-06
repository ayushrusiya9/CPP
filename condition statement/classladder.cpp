#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1 no \n";
    cin>>a;
    cout<<"Enter 2 no. \n";
    cin>>b;
    cout<<"Enter 3 no \n";
    cin>>c;

    if(a > b && a > b)
    {
        cout<<a<<" is large";
    }
    else if(b > a && b > c)
    {
        cout<<b<<" is large";
    }
    else if(c > b && c > a)
    {
        cout<<c<<" is large";
    }
    else if(a == b && a != c){
        cout<<"a and b is equal\n";
    }
    else if(b == c && b != a){
        cout<<"b and c is equal\n";
    }
    else if(a == b && b == c ){
        cout<<"same value";
    }
    else{
        cout<<c<<" is large\n";
    }
}
