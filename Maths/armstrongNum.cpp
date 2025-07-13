#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int copyN = n;
    int sumOfCubes = 0;

    while(n != 0) {
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);

        n = n / 10;
    }

    return sumOfCubes == copyN;
}

int main() {

    int n = 153; //check if it's an Armstrong number
    
    if (isArmstrong(n)) {   
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    
    return 0;
}

// Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. 
//  1^3 = 1, 153 = 1^3 + 5^3 + 3^3, 370 = 3^3 + 7^3 + 0^3, etc.