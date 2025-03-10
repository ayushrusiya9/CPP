99*9**4777#include<iostream>
using namespace std;

int main()
{

    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year % 4 == 0 ){
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                cout<<"Year is leap year";
            }
            else
                {
                cout<<"year is not leap year";
                }
        }
        else
        {
            cout<<"Year is leap year";
        }
    }
    else{
      cout<<"Year is not leap year";
    }

}
