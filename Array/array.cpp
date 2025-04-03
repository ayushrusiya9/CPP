#include<iostream>
using namespace std;

int main()
{
    /*
    int arr[10] =  {};//stored rest values are 0
    // int arr[10];//stored garbage value
    int s = sizeof(arr)/sizeof(arr[0]);//formula to calculate lenght of array
    cout<<"Size of array"<<s<<"\n";
    // arr[5] = 500;//edit value
    cout<<"Enter "<<s<<" values of array \n";
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    cout<<"\nstored data \n";
    for(int i = 0; i < s; i++){
        cout<<arr[i]<<"\n";//display array value
    }
        */

        int a[5];

        for(auto &x :a)
        {
            cin>>x;
        }
        for(auto &x :a)
        {
            cout<<x;
        }


}