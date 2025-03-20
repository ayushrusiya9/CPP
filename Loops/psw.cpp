#include<iostream>
using namespace std;

int main(){
  int password = 2025,psw;
  int attempt = 3;


  while(attempt > 0){
    cout<<"Enter password\n";
    cin>>psw;
    if(psw == password){
        cout<<"right password\n";
    }
    else{
            attempt--;
       cout<<"wrong password\n";
    }
  }
  cout<<"many attempt\n";

}
