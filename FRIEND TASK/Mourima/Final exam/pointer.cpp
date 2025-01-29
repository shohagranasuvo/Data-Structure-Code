#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    int* ptr = &a;  // Pointer initially pointing to 'a'

    // Modify 'a'
    cout << "Initial value of a: " << *ptr << endl;
    *ptr ++; 
    cout << "After incrementing a: " << ++(*ptr) << endl;

    // Connect and modify 'b'
    ptr = &b;
    cout << "Initial value of b: " << *ptr << endl;
    *ptr = *ptr + *(&a);  // b = b + a
    cout << "After b = b + a: " << *ptr << endl;

    // Connect and modify 'c'
    ptr = &c;
    cout << "Initial value of c: " << *ptr << endl;
    *ptr = *ptr - *(&b);  // c = c - b
    cout << "After c = c - b: " << *ptr << endl;

    // Back to 'a' and perform final operation
    ptr = &a;
    *ptr = *ptr + *(&b) + *(&c);  // a = a + b + c
    cout << "After a = a + b + c: " << *ptr << endl;

    int r= 99 ;
    cout<<r++<<endl; 
    r++ ;


    cout<<(r++)*(++r)<<endl ;

    return 0;
}
