#include<iostream>
using namespace std;

int main()
{
    int n = 3, k = 0, flag = 0;
    
    while(n <= 20){
        k = n - 1;
        while(k > 1){
            if(n % k == 0)
            {
                flag = 1;
                break;
            }
            k--;
        }
        if(flag == 0){
            cout<<n<<"\t";
        }
        flag = 0;
        n++;
    }
}
