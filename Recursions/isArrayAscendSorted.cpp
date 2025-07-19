#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if (n == 0 || n == 1) {
        return true;
    }

    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);       // O(N) Complexity
}


int main() {
    vector<int> arr = {1,2, 9, 4 ,5};

    cout << isSorted(arr, arr.size()) << endl;

    return 0;
}