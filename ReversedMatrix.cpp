#include <iostream>
using namespace std;

int main() {
    int row, col;
    int arr[row][col];
    int reversedArr[row][col];

    cout << "Enter the number of rows: " ;
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    cout << "Enter all the elements in the matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter Value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int newRow = row - 1 - i;
            int newCol = col - 1 - j;

            reversedArr[newRow][newCol] = arr[i][j];
        }
    }

    cout << "Reversed 2D Array:";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == col - 1) {
                cout << 0;
            } else {

                cout<<reversedArr[i][j];
            }
        }

    }

    return 0;
}
