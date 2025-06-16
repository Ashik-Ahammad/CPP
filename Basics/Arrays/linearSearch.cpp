#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {

    for(int i = 0; i < size; i++) {
        if (arr[i] == target) { 
            return i; 
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {

    int arr[] = {5, 3, 8, -13, 21};
    int size = 5;
    int target = 8;
    int result = linearSearch(arr, size, target);   
    cout << "Element: " << target << (result != -1 ? " found at index: " : " not found. ") << result << endl;

    return 0;
}