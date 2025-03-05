#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, simpleInterest;

    // Taking user input
    cout << "Enter Principal Amount (P): ";
    cin >> principal;

    cout << "Enter Rate of Interest per annum (R%): ";
    cin >> rate;

    cout << "Enter Time (T) in years: ";
    cin >> time;

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    cout << "The Simple Interest is: " << simpleInterest << endl;

    return 0;
}

