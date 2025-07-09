#include <iostream>
using namespace std;

string isPrime(int n) {

    if (n <= 1) return "Not Prime!"; // 0 and 1 are not prime numbers

    for(int i = 2; i * i <= n; i++) { // Check up to sqrt(n)
        if(n % i == 0) {
            return "Not Prime!";
        }
    }
    return "Prime";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << " is " << isPrime(n) << endl;
    return 0;
}


// A prime number is a whole number greater than 1 that has exactly two distinct divisors: 1 and itself.


/*
------------------optimized version------------------



#include <iostream>
using namespace std;

string isPrime(int n) {
    if (n <= 1) return "Not Prime!";
    if (n == 2) return "Prime";
    if (n % 2 == 0) return "Not Prime!";

    for (int i = 3; i * i <= n; i += 2) { // Check only odd divisors
        if (n % i == 0) {
            return "Not Prime!";
        }
    }
    return "Prime";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << " is " << isPrime(n) << endl;
    return 0;
}



*/