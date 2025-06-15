#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    


    return 0;
}



/*
1. first loop, entire loop  ---> n times
2. single row ----> inner loop 
*/