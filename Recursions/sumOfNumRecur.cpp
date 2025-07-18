#include <iostream>
using namespace std;

int sum(int n){                                              // O(n) ----> SC & TC
    // Base case
    if (n == 1){
        return 1;
    }

    // Print the current number
    cout << n;

    // Print " " unless it's the last number in the sequence
    if (n >= 1) {
        cout << " ";
    }

    // Recursive call
    return n + sum(n-1);
}

int main() {
    cout << "Sumof ----> ";
    
    int result = sum(4); // This will now print the steps

    cout << " = " << result << endl;

    return 0;
}

