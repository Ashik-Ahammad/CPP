#include <iostream>
using namespace std;

/*
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
*/

void bubbleSort(int arr[], int n) { //O(n^2) time complexity, O(1) space complexity

    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false; // To optimize the bubble sort, we can use a flag to check if any swapping occurred in the inner loop.

        for (int j = 0; j < n - i - 1; ++j) { //j < n - i - 1 skips the sorted part, making bubble sort more efficient.

            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);
                swapped = true; // Set the flag to true if a swap occurs.

            }
        }

        if (!swapped) { // If no swaps occurred, the array is already sorted.
            return; // Break out of the loop early.
        }
    }
}


int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}