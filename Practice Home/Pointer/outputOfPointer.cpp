#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int *p1 = &x;
    int *p2 = &x;

    cout << (*p2 )++<< endl;    // Outputs the value of x (10)
    cout << ++(*p1) << endl; // Increments x and outputs its new value (11)

    x = 60; // Update the value of x to 60
    int *p3 = &x;
    int *p3 = p1 ;

    cout <<++( *p1) << endl;    // Outputs the value of x (60)
    cout << *p2 << endl;    // Outputs the value of x (60)
    cout << (*p1)++ << " " << ++(*p2) << " " << (*p3)++ << endl; // Increments x twice and prints x three times

    return 0;
}
