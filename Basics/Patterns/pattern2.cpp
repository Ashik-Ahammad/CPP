#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int num = 0;

    for (int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    


    return 0;
}



/*
1. first loop, entire loop  ---> n times
2. single row ----> inner loop 
*/

/*
0 1 2 3 
4 5 6 7 
8 9 10 11 
12 13 14 15 
*/
