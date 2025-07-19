#include <iostream>
using namespace std;

int fibonacci(int n) {

    if (n <= 1) {
        return n;
    }

    return  fibonacci(n - 2) + fibonacci(n - 1);       // O(2^N) = tc           // O(N) = sc
}

int main() {

    int number;
    cout << "Enter a number to print the Fibonacci sequence: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        cout << "Fibonacci sequence up to your input : " << endl;

        for (int i = 0; i <= number; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl; 
    }

    return 0;
}