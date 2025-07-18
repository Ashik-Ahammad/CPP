#include <iostream>
using namespace std;

void printNums(int n){
    if(n==1) {          //base case
        cout << "1\n";
        return;         //exiting the function
    }

    cout << n << " ";
    printNums(n-1);
}

int main() {
    printNums(10);
    return 0;
}