#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++){

        //spaces
        
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        //numbers
         
        for(int j = 0; j < n-i; j++){
            cout << i+1;
        }
        cout << endl;
        
    }
    
    return 0;
}



/*
1. first loop, entire loop  ----> n times
2. single row ----> inner loop 
*/

/*
1111
 222
  33
   4
*/
