//Check if a 4-digit password is valid (e.g., no repeating digits, specific patterns)
#include<iostream>
using namespace std;

int main()
{
    int psw, right = 2025, right1 = 1111;
    cin>>psw;

    if(psw == right)
    {
        cout<<"valid\n";
        int otp;
        cout<<"Enter otp\n";
        cin>>otp;
        if(otp == right1)
        {
            cout<<"right otp\n";
        }
        else{
            cout<<"wrong\n";
        }
    }
    else{
        cout<<"not\n";
    }
}