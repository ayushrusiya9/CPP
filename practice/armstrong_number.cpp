#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a given number is an Armstrong number
bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = 0;
    int sum = 0;

    // Count number of digits
    for (int temp = number; temp > 0; temp /= 10) {
        numDigits++;
    }

    // Calculate sum of digits raised to the power of numDigits
    for (int temp = number; temp > 0; temp /= 10) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
    }

    return sum == originalNumber;
}

int main() {
    int num;
    cout << "Enter a number to check if it's an Armstrong number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
