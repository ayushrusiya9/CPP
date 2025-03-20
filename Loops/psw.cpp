#include<iostream>
using namespace std;

int main(){
  int psw;
  int attempt = 1;
  cout<<"Enter password\n";


  while(attempt <= 3){
    cin>>psw;
    if(psw == 2025){
        cout<<"right password\n";
        break;
    }
    else{
       cout<<"try again\n";
    }
    attempt++;
    if(attempt == 4){
        cout<<"Try another day\n";
    }
  }
}
