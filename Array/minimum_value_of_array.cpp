#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    
    for(int i = 0; i < s; i++){
         
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<min;
}