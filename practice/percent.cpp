#include<iostream>
using namespace std;

int main()
{

    int ph,m,c;
    cout<<"Enter physics marks ";
    cin>>ph;
    cout<<"Enter maths marks ";
    cin>>m;
    cout<<"Enter chemistry marks ";
    cin>>c;

     int total = ph + m + c ;
     int result = total / 3;

     if(result >= 60 && result <= 100){
        cout<<"First Division ";
     }
     else if(result >= 50 && result <= 59){
        cout<<"Second Division ";
     }
     else if(result >= 35 && result <= 50)
     {
         cout<<"Third Division ";
     }
     else{
       cout<<" fail";
     }
    // cout<<result;



}
