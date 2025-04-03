#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {3,8,7,6,12,4,3,2,1,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    int sum = arr[0];
    
    for(int i = 1; i < s; i++){
        sum = sum + arr[i];
    }

    cout<<sum;
}