#include<iostream>
using namespace std;

int main()
{

    int a, b , c;
    cout<<"Enter 2 diff number:\n";
    cin>>a>>b;
    cout<<"enter any condition, 1-> plus 2-> minus 3-> multyply 4-> divide 5-> mod";
    cin>>c;

    switch(c)
    {
    case 1:
        {

            cout<<a+b;
            break;
        }
    case 2:
        {
            cout<<a-b;
        }
    default:
        cout<<"invalid";
    }
    }
