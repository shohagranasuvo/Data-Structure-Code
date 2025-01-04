#include <iostream>
using namespace std;

void modifyPointer(int *p, int offset) {
    *(p + offset) += 5; }

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    cout << *p << endl;
    p++;
    cout << *p << endl;
    modifyPointer(p, 0);
    cout << *p << endl;
    p++;
    cout << *p << endl;
    (*p)--;
    cout << *p << endl;
    modifyPointer(p, -1);
    p--;
    cout << *p << endl;
    cout << *(p - 1) << endl;
    cout << *(p + 1) << endl;
    p -= 2;
    modifyPointer(p, 2);
    cout << *p << endl;
    p += 2;
    cout << *p << endl;

    return 0;
}