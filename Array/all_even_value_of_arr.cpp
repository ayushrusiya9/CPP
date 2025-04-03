#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,5,4,3,4,3,4,3,5,5};
    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < s; i++){
        if(i % 2 == 0){
            cout<<arr[i]<<"\n";
        }
    }
}