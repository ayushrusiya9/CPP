#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter any charecter ";
    cin>>a;

    if((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'))
    {
        cout<<"vowel";
    }
    else
    {
        cout<<"constant";
    }
}
