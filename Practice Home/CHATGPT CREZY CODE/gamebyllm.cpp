#include <iostream>
using namespace std;

const int n = 5; // Size of the 2D array
char a[n][n] = { {' ', ' ', '*', ' ', 'G'},
                 {' ', '*', ' ', ' ', '*'},
                 {' ', '*', ' ', ' ', ' '},
                 {' ', ' ', ' ', '*', ' '},
                 {'*', '*', '*', '*', 'S'} }; // S represents Start point

void print_maze() {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

bool find_path(int x, int y) {
    if(x < 0 || x >= n || y < 0 || y >= n) // Out of bounds
        return false;
    
    if(a[x][y] == 'G') { // Found the goal
        a[x][y] = 'S';
        return true;
    }
    else if(a[x][y] != '*' && a[x][y] != 'X') { // Empty space, we can go here
        a[x][y] = 'X'; 
        
        if (find_path(x-1, y) || find_path(x+1, y) || 
            find_path(x, y-1) || find_path(x, y+1)) { // Recursive call for all directions
            return true;
        } 
        
        a[x][y] = ' '; // If no path, mark this space as empty and backtrack
    }
    
    return false;
}

int main() {
    print_maze();
    find_path(n-1, n-1);  // Start searching from the bottom right corner (0, 0)
    cout << "Solved maze: \n";
    print_maze();
    
    return 0;
}