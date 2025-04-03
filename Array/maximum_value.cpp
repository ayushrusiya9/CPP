#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {0,8,7,6,12,4,3,2,1,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    
    for(int i = 0; i < s; i++){
         
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<max;
}