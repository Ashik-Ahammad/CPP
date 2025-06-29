#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) { // O(n^2) time complexity, O(1) space complexity

    for (int i = 1; i < n; i++) {

        int current = arr[i];
        int prev = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead

        while (prev >= 0 && arr[prev] > current) {

            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = current;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}