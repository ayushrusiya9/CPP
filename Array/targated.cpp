#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"length of arr\n";
   cin>>n;
   int arr[n] = {1,2,3,4,5};
   int target;
   cout<<"target value\n";
   cin>>target;
  int p = 0;
   for(int i = 0;i < n; i++ ){
       if(arr[i] == target){
         p = 1;
        break;
       }

   }
   if(p == 1){
    cout<<"yes\n";
   }

}