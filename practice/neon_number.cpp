#include <iostream>

/**
 * Neon Number: A number where the sum of digits of its square is equal to the number itself.
 * Example: 9
 * Square of 9 = 81
 * Sum of digits of 81 = 8 + 1 = 9
 * Since 9 == 9, it is a Neon Number.
 */

int main() {
    int num, square, sum = 0;

    std::cout << "Enter a number to check if it's a Neon Number: ";
    std::cin >> num;

    // Calculate the square of the number
    square = num * num;

    // Calculate the sum of digits of the square
    int temp = square;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // Compare the sum with the original number
    if (sum == num) {
        std::cout << num << " is a Neon Number." << std::endl;
    } else {
        std::cout << num << " is not a Neon Number." << std::endl;
    }

    return 0;
}
