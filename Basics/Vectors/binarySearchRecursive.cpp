#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) { // 2nd half
            return recBinarySearch(arr, tar, mid + 1, end);
        } else if (tar < arr[mid]) { // 1st half
            return recBinarySearch(arr, tar, st, mid - 1);
        } else { // mid => ans
            return mid;
        }
    }
    return -1; // not found
}

int main() {
    vector<int> arr = {-10, -2, 0, 3, 6, 8, 11, 15};
    int tar;

    cout << "Enter the element to search: ";
    cin >> tar;

    int ans = recBinarySearch(arr, tar, 0, arr.size() - 1);

    if (ans != -1)
        cout << "Element found at index: " << ans << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
