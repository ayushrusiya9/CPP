#include <iostream>
using namespace std;

int main() {
    float num, cube;

    // Taking user input
    cout << "Enter a number: ";
    cin >> num;

    // Calculating cube
    cube = num * num * num;

    // Displaying the result
    cout << "The cube of " << num << " is: " << cube << endl;

    return 0;
}

