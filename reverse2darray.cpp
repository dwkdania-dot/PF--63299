#include <iostream>
using namespace std;

int main() {
    int row, col;
    
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    
    int arr[row][col];
    
    cout << "Enter all the elements in the matrix:";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    
    cout << "Reversed 2D Array:";
    for (int i = row - 1; i >= 0; i--) {
        for (int j = col - 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}