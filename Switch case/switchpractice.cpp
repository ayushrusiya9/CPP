#include<iostream>
using namespace std;

int main()
{
    int value,yr,number;
    cout<<"Enter 1-> even/odd.  2-> leap year.  3-> square of number.  4-> cube of number.\n";
    cin>>value;

    switch(value){
    case 1:
        {
            number;
            cout<<"Enter number:\n";
            cin>>number;
            if(number % 2 == 0){
                cout<<"Number is even\n";
            }else{
                cout<<"Number is odd\n";
            }
        }
    case 2:
        {
             yr;
            cout<<"Enter year:\n";
            cin>>yr;

            if((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0){
                cout<<yr<<" is leap year\n";
            }else{
                cout<<yr<<" is not leap year\n";
            }
            break;
        }
    case 3:
        {
            number;
            cout<<"Enter number\n";
            cin>>number;
            cout<<number * number ;
        }
    case 4:
        {
            number;
            cout<<"Enter number\n";
            cin>>number;
            cout<<number * number * number ;
        }
    }
}
