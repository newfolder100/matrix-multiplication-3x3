//
// Created by PC on 9/24/2025.
//

#include <iostream>
using namespace std;

int main() {
    int Matrix_A[3][3], Matrix_B[3][3], Matrix_C[3][3];

    // User enters the elements of matrix A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element A[" << i << "][" << j << "]: ";
            cin >> Matrix_A[i][j];
        }
    }

    // User enters the elements of matrix B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element B[" << i << "][" << j << "]: ";
            cin >> Matrix_B[i][j];
        }
    }

    // Calculate the product of Matrix A and Matrix B for each element of Matrix C
    // Formula: C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Matrix_C[i][j] = (Matrix_A[i][0] * Matrix_B[0][j]) +
                             (Matrix_A[i][1] * Matrix_B[1][j]) +
                             (Matrix_A[i][2] * Matrix_B[2][j]);
        }
    }

    cout << endl << endl;

    // Printing matrix C
    cout << "Matrix C(A * B): " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << Matrix_C[i][j] << "  ";
        }
        cout << endl;
    }


    return 0;
}