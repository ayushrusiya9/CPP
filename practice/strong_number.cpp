#include <iostream>

/**
 * Strong Number: A number where the sum of the factorials of its digits is equal to the number itself.
 * Example: 145
 * 1! + 4! + 5! = 1 + 24 + 120 = 145
 * Since 145 == 145, it is a Strong Number.
 */

// Function to calculate factorial of a digit
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, sum = 0;

    std::cout << "Enter a number to check if it's a Strong Number: ";
    std::cin >> num;

    originalNum = num;

    // Calculate sum of factorials of digits
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Compare sum with original number
    if (sum == originalNum) {
        std::cout << originalNum << " is a Strong Number." << std::endl;
    } else {
        std::cout << originalNum << " is not a Strong Number." << std::endl;
    }

    return 0;
}
