#include <iostream>
using namespace std;

int factorial(int n){                                              // O(n) ----> SC & TC
    // Base case
    if (n == 0){
        return 1;
    }

    // Print the current number
    cout << n;

    // Print " * " unless it's the last number in the sequence
    if (n > 1) {
        cout << " * ";
    }

    // Recursive call
    return n * factorial(n-1);
}

int main() {
    cout << "factorial(5) = ";
    
    int result = factorial(5); // This will now print the steps

    cout << " = " << result << endl;

    return 0;
}

