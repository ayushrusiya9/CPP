#include <iostream>
using namespace std;

int main() {
    int num = 5, i = 1;

start:
    if (i > 10) // Condition to stop recursion-like behavior
       return 0;

    cout << num << " x " << i << " = " << num * i << endl;
    i++;
    goto start; // Jump back to "start" label

    return 0;
}
