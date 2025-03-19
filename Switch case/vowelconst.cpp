#include<iostream>
using namespace std;

int main()
{

    int a;
    char c;
    cout<<"Enter any charecter\n";
    cin>>c;
    cout<<"Select 1-> to display vowels or consonant, 2 for gander\n";
    cin>>a;

    switch(a)
    {
    default:
        {
            cout<<"Invalid choice\n";
            break;
        }
 case 1:
    {
        if(c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e'){
            cout<<"vowels\n";
        }else{
        cout<<"Consonent\n";
        }
        break;
    }
 case 2:
    {
        if(c == 'm'){
            cout<<"Males\n";
        }else if(c == 'f'){
        cout<<"female\n";
        }else{
        cout<<"Other\n";
        }
        break;
    }

    }
}
