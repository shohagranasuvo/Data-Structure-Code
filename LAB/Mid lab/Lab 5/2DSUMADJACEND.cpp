#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3];

    // Input the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element of row = " << i + 1 << ", col = " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

      int res[3][3] = {0}; 


    for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
            
            if (i > 0) res[i][j] += arr[i - 1][j]; // Top
            if (i < 2) res[i][j] += arr[i + 1][j]; // Bottom
            if (j > 0) res[i][j] += arr[i][j - 1]; // Left
             if (j < 2) res[i][j] += arr[i][j + 1]; // Right
        }
    }

    
    cout << "\nTransformed array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element at row " << i + 1 << ", col " << j + 1 << " = " << res[i][j] << endl;
        }
    }

    return 0;
}
