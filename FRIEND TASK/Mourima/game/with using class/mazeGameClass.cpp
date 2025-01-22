#include <iostream>
#include <cstdlib>
using namespace std;

class MazeGame {
private:
    int row, col;
    int arr[100][100];

public:
    MazeGame(int r, int c) : row(r), col(c) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                arr[i][j] = 1;
            }
        }
        arr[0][0] = 3;
        arr[row - 1][col - 1] = 4;
    }

    void generateObstacles() {
        int j = 1;
        for (int i = 0; i < row; i++) {
            if (col == 3 && i == 1) {
                continue;
            }
            if ((i == 0 && j == 0) || (i == row - 1 && j == col - 1)) {
                continue;
            }
            int ran = rand() % col;
            while (ran == j - 1 || ran == j + 1) {
                ran = rand() % col;
            }
            j = ran;
            arr[i][j] = 2;
        }
    }

    void displayMaze() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void playGame() {
        int s = 0, h = 0;

        while (arr[row - 1][col - 1] != 3) {
            char c;
            cout << "For going left press l, right press r, up press u, or down press d: ";
            cin >> c;

            if (c == 'r') {
                if (h + 1 >= col || arr[s][h + 1] == 2) {
                    cout << "Here Obstacle or Out of bound. Try another way." << endl;
                    continue;
                }
                arr[s][h] = 1;
                arr[s][h + 1] = 3;
                h += 1;

            } else if (c == 'l') {
                if (h - 1 < 0 || arr[s][h - 1] == 2) {
                    cout << "Here Obstacle or Out of bound. Try another way." << endl;
                    continue;
                }
                arr[s][h] = 1;
                arr[s][h - 1] = 3;
                h -= 1;

            } else if (c == 'u') {
                if (s - 1 < 0 || arr[s - 1][h] == 2) {
                    cout << "Here Obstacle or Out of bound. Try another way." << endl;
                    continue;
                }
                arr[s][h] = 1;
                arr[s - 1][h] = 3;
                s -= 1;

            } else if (c == 'd') {
                if (s + 1 >= row || arr[s + 1][h] == 2) {
                    cout << "Here Obstacle or Out of bound. Try another way." << endl;
                    continue;
                }
                arr[s][h] = 1;
                arr[s + 1][h] = 3;
                s += 1;
            }

            displayMaze();
        }

        cout << "Congratulations! You reached the goal!" << endl;
    }
};

int main() {
    int row, col;
    cout << "Enter maze row: ";
    cin >> row;
    cout << "Enter maze col: ";
    cin >> col;

    MazeGame game(row, col);
    game.generateObstacles();

    cout << "Here is the maze:" << endl;
    game.displayMaze();

    game.playGame();

    return 0;
}