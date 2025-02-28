#include<iostream>
using namespace std;

int main()
{
    // int k = 578;
    // int a = k/100;//5
    // int k2 = 578;
    // int b = k2%10;//78
    // int k3 = b/10;//
    // int c = k3/100;

    // int num;
    // cout << "Enter number: ";
    // cin >> num;
    // int a = num / 100;//5
    // int b = num % 100;//78
    // int c = b / 10;//7
    // int d = b % 10;//8
    // int sum = a + c + d;
    // cout<<sum;


    int num;
    cout << "Enter number: ";
    cin >> num;

    // Check if the input is valid
    if(cin.fail()) {
        cout << "Invalid input! Please enter a valid integer." << endl;
        return 1;  // Exit if the input fails
    }

    int a = num / 100;  // Extract hundreds place
    int b = num % 100;  // Get last two digits
    int c = b / 10;     // Extract tens place
    int d = b % 10;     // Extract ones place

    int sum = a + c + d; // Sum of individual digits
    cout << "Sum of digits: " << sum << endl;



}