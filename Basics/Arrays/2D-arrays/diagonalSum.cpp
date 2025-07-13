#include <iostream>
using namespace std;

int diagonalSum(int arr[][3], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == j) { // Primary diagonal
                sum += arr[i][j];
            }

            else if (j == n - i - 1) { // Secondary diagonal
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main() {
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3; // Number of rows and columns

    cout << diagonalSum(matrix, n) << endl;

    return 0;
}