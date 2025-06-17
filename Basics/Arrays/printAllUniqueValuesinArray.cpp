#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    cout << "Unique values (appearing exactly once): ";
    
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        
        // Check if this element appears elsewhere in the array
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        
        if (isUnique) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
}

int main() {
    int numbers[] = {1, 2, 2, 3, 4, 4, 5, 5, 6};
    int size = 9;
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    printUniqueValues(numbers, size);
    
    return 0;
}