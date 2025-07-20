#include <iostream>
using namespace std;

int main() {
    int grid[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Sudoku Grid:\n\n";

    for (int row = 0; row < 9; row++) {
        if (row % 3 == 0 && row != 0)
            cout << "------+-------+------\n";

        for (int col = 0; col < 9; col++) {
            if (col % 3 == 0 && col != 0)
                cout << "| ";

            if (grid[row][col] == 0)
                cout << ". ";
            else
                cout << grid[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}