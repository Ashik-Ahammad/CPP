#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = reverseNumber(number);
    cout << "Reversed number: " << result << endl;

    return 0;
}
