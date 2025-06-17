#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7}; 
    int size = 5;

    // Print original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Find min and max positions
    int min_pos = 0, max_pos = 0;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[min_pos]) min_pos = i;
        if (arr[i] > arr[max_pos]) max_pos = i;
    }
    
    // Swap them
    int temp = arr[min_pos];
    arr[min_pos] = arr[max_pos];
    arr[max_pos] = temp;
    
    // Print result
    cout << "After swap: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}