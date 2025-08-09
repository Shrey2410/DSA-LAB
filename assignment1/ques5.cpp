#include<bits/stdc++.h>
using namespace std;

void inputMatrix(int A[10][10], int rows, int cols) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }
}


void sumRows(int A[10][10], int rows, int cols) {
    cout << "\nSum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }
}


void sumCols(int A[10][10], int rows, int cols) {
    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }
}

int main() {
    int rows, cols;
    int A[10][10];

    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    
    inputMatrix(A, rows, cols);

    
    sumRows(A, rows, cols);
    sumCols(A, rows, cols);

    return 0;
}