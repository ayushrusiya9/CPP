#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter any number";
    cin>>n;

    str:
    if(n > 10)
        return 0;

    cout<<n;
    n++;
    goto str;
    return 0;
}
