#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) { // O(n^2) time complexity, O(1) space complexity

    for (int i = 0; i < n - 1; ++i) {

        int smallestIndex = i;

        for (int j = i + 1; j < n; ++j) {

            if (arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }

        if (smallestIndex != i) {
            swap(arr[i], arr[smallestIndex]);
        }

    }
}

int main() {

    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}