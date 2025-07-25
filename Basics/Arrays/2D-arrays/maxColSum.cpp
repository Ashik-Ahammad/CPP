#include <iostream>
using namespace std;


int getMaxColSum(int arr[][3], int rows, int cols) {

    int maxColSum = INT_MIN;

    for (int j = 0; j < cols; ++j) {

        int colSumJ = 0;

        for (int i = 0; i < rows; ++i) {
            colSumJ += arr[i][j];
        }
        
        maxColSum = max(maxColSum, colSumJ);
    }
    return maxColSum;
}

int main() {
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;
    cout << "Max-Row-Sum: " << getMaxColSum(matrix, rows, cols) << endl;


    return 0;
}