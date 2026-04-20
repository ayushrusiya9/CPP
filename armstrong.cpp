#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, result = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate Armstrong sum
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check result
    if (result == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}