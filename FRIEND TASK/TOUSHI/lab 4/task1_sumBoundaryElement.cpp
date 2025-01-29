#include <iostream>
using namespace std;

int main() {
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {14, 15, 16, 17, 6},
        {13, 20, 9, 18, 7},
        {12, 11, 10, 9, 8}
    };

    int m = 4, n = 5, sum = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                sum += arr[i][j];
            }
        }
    }

    cout << "Sum of boundary elements: " << sum << endl;
    return 0;
}
