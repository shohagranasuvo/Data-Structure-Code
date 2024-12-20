#include <iostream>
using namespace std;

int main() {
    int x = 42;
    float y = 3.14;
    void* ptr; 


    ptr = &x;
    cout << "Integer value: " << *(int*)ptr << endl; // Casting to int* before dereferencing

    // Point to a float
    ptr = &y;
    cout << "Float value: " << *(int*)ptr << endl; // Casting to float* before dereferencing

    return 0;
}
