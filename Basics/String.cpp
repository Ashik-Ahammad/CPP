#include <iostream>
using namespace std;

int main() {
    char str[100]; 
    
    cout << "INPUT "; // Prompt for input
    cin.getline(str, 100); // Read a string from standard input
    cout << "OUTPUT " << str << endl; // Output the string to standard output

    return 0;
}