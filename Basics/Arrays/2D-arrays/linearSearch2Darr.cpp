#include <iostream>
using namespace std;

bool linearSearch2D(int arr[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int rows = 4;
    int cols = 3;

    cout << "Enter the target value to search: ";
    int target; 
    cin >> target;

    bool found = linearSearch2D(matrix, rows, cols, target);
    if (found) {
        cout << "Element " << target << " found in the matrix." << endl;
    } else {
        cout << "Element " << target << " not found in the matrix." << endl;
    }

    return 0;
}