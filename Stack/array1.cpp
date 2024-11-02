#include <iostream>
using namespace std;

int main() {
    // Define and initialize a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;  // Variable to store the sum of all elements

    // Loop through each element in the 2D array and add to sum
    for (int i = 0; i < 3; i++) {       // Loop through rows
        for (int j = 0; j < 3; j++) {   // Loop through columns
            sum += matrix[i][j];
            cout<<sum<<endl;
        }
    }

    cout << "The sum of all elements in the 2D array is: " << sum << endl;

    return 0;
}
