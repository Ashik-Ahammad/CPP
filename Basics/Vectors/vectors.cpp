// vector is size is not fixed, it can grow or shrink dynamically.
// vector is a sequence container that encapsulates dynamic size arrays.
// vector use dynamic memory allocation to store elements in runtime. in heap memory. And static mem allocation use stack memory.

#include <iostream>
#include <vector>   
using namespace std;

int main(){

    //vector<int> vec;
    //vector<int> vec = {1, 2, 3, 4, 5};             // Initializing a vector
    vector<int> vec(5, 10);                         // Initializing a vector with 5 elements, each initialized to 10
    
    vec.push_back(20);
    vec.push_back(65);
    vec.push_back(27);
    vec.push_back(98);
    vec.pop_back();                              // Adding an element to the end of the vector
    

    for (int i : vec)       // Range-based for loop to iterate through the vector, it actually iterates the values
    {
        cout << i << " ";
    }

    cout << endl;
    cout << vec.front() << endl;  // Accessing the first element of the vector
    cout << vec.back() << endl;   // Accessing the last element of the vector
    cout << vec.size() << endl;   // Getting the size of the vector
    cout << vec.at(6) << endl;  // Accessing the element at index 2 (zero-based indexing)

    return 0;
}