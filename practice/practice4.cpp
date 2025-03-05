
#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Taking user input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Displaying the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}
