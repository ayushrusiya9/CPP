#include<iostream>
using namespace std;

int main()
{
    int num,d1,d2,d3,cube1,cube2,cube3,sum;
    cout<<"Enter number\n";//153
    cin>>num;

         d1 = num/100;//1
         d2 = (num/10)%10;//5
         d3 = num % 10;//3

        cube1 = d1*d1*d1;
        cube2 = d2*d2*d2;
        cube3 = d3*d3*d3;
        sum = cube1 + cube2 + cube3;

        if(sum == 153){
            cout<<"Number is Arm strong\n";
        }
        else
        {
            cout<<"Given number is not arm strong\n";
        }

}
