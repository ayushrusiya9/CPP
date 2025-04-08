#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // If number is less than or equal to 1, it's not prime
    if (num <= 1) {
        cout << num << " is not a  number." << endl;
    }
    // If number is 2, it's prime (the only even prime number)
    else if (num == 2) {
        cout << num << " is a prime number." << endl;
    }
    // Check if number is divisible by any number from 2 to num-1
    else if (num % 2 == 0) {
        cout << num << " is not a prime number." << endl;
    }
    else if (num % 3 == 0) {
        cout << num << " is not a prime number." << endl;
    }
    else {
        cout << num << " is a prime number." << endl;
    }

    return 0;
}
