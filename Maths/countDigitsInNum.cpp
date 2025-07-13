#include <iostream>
using namespace std;

void printDigits(int n) { 
    
    while (n != 0) {
        int digit = n % 10;
        cout << "Digit: " << digit << endl;

        n = n / 10;
    }
    
}
// -------------------------------------------------------------------------------------------------- \\

void countDigitsInNum (int n) {
    int count = 0;

    while (n != 0) {
        int digit = n % 10;
        count++;
        n = n / 10;
    }

    cout << "Total digits: " << count << endl;
}

int main() {
    int n = 3568;

    printDigits(n);
    cout << endl;
    countDigitsInNum(n);

    return 0;
}