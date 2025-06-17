#include <iostream>
using namespace std;

void calculateSumAndProduct(int arr[], int size) {
    int sum = 0;
    long long product = 1;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4};
    int size = 4;
    
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    calculateSumAndProduct(numbers, size);
    return 0;
}