#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int* ptr = &a; // Pointer p holds the address of variable a

    int** ptr2 = &ptr; // Pointer to pointer holds the address of ptr

    cout << "Address of a: " << ptr << endl;
    cout << "Value of a: " << *ptr << endl; // Dereferencing operator ( * ) ptr gives the value of a
    cout << "Address of ptr: " << ptr2 << endl;

    return 0;
} 

//         ----------------------->  Pointers in C++ <-----------------------
// Special variables that store the address of other variables are called pointers.
// The & operator is used to get the address of a variable.


// int* ptr = NULL;       ---------> A pointer that doesnt point to any location!

// Array of pointers: int* ptr[10];  ---------> An array of 10 pointers to int.