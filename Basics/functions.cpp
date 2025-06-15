#include <iostream>
using namespace std;

int sum(int a, int b) {
    
    int s = a + b;

    return s;
}

int main() {

    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    cout <<"Sum: " << sum(a, b) << endl;
    
    return 0;
}