#include <iostream>
#include <vector>
using namespace std;

// Binary Search Function
int binarySearch(const vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;  // Element found
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;  // Element not found
}

int main() {
    vector<int> arr = {-5, -1, 0, 3, 7, 12, 19};
    int target;

    cout << "Enter the target element to search: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
