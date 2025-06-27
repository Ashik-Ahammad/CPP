#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {-1, 0, 3, 4, 5, 9, 12, 15};
    int start = 0, end = (sizeof(arr)/sizeof(arr[0])) - 1;
    int target = 22;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] < target) {
            start = mid + 1;
        } 
        else if (arr[mid] > target) {
            end = mid - 1;
        } 
        else {
            cout << "Element found at index: " << mid << endl;
            break;
        }

    }
    if(!(start <= end)) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}