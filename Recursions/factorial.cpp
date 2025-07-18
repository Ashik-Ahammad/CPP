#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    
    cout << factorial(5) << endl; // Output: 5*4*3*2*1 ===> 120

    return 0;
}