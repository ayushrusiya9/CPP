#include<iostream>
using namespace std;

int main()
{

    float ph,m,c,per;
    cout<<"Enter physics marks ";
    cin>>ph;
    cout<<"Enter maths marks ";
    cin>>m;
    cout<<"Enter chemistry marks ";
    cin>>c;

    if ((ph >= 0 && ph <= 100) && (m >= 0 && m <= 100) && (c >= 0 && c <= 100)){
       // cout<<"valid number ";
    }
    else{
        cout<<"invalid number\n";
    }



    if(ph < 34 && m > 34 && c > 34){
        cout<<"Supply in physics \n";
    }
    else if(m < 34 && ph > 34 && c > 34){
        cout<<"Supply in maths\n";
    }
    else if(c < 34 && ph > 34 && m > 34){
        cout<<"Supply in chemistry\n";
    }

    per = (ph + m + c)/3;
    cout<<per<<"%\n";

    if(per >= 60 && per <= 100){
        cout<<"First Division \n";
     }
     else if(per >= 50 && per <= 59){
        cout<<"Second Division \n";
     }
     else if(per >= 35 && per <= 50)
     {
         cout<<"Third Division \n";
     }
     else{
       cout<<"you are fail\n";
     }

}
