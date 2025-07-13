#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers and numbers ending in 0 (but not 0 itself) cannot be palindromes
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reversedHalf = 0;

    // Reverse half of the number
    while (x > reversedHalf) {
        int digit = x % 10;
        reversedHalf = reversedHalf * 10 + digit;
        x /= 10;
    }
    return (x == reversedHalf || x == reversedHalf / 10);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
        cout << number << " is a palindrome." << endl;
    else
        cout << number << " is not a palindrome." << endl;

    return 0;
}
