#include<iostream>
using namespace std;

int main()
{
    int n=1;
    int i = 1;
    h:
    if(i > 15){
        cout<<n+i;
    i++;
    }
    goto h;
}
