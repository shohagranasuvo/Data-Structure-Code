#include <iostream>
using namespace std;

// Function using Pass by Value
void multiplyByTwo(int x) {
    x *= 2;  // Modifies only the copy
    cout << "Inside multiplyByTwo (pass by value): x = " << x << endl;
}

// Function using Pass by Reference
void multiplyByThree(int& x) {
    x *= 3;  // Directly modifies the original variable
    cout << "Inside multiplyByThree (pass by reference): x = " << x << endl;
}

int main() {
    int a = 5, b = 5;

    // Pass by Value example
    cout << "Before multiplyByTwo: a = " << a << endl;
    multiplyByTwo(a);
    cout << "After multiplyByTwo: a = " << a << endl << endl;

    // Pass by Reference example
    cout << "Before multiplyByThree: b = " << b << endl;
    multiplyByThree(b);
    cout << "After multiplyByThree: b = " << b << endl;

    return 0;
}
