#include <iostream>
using namespace std;

int main() {
    float marks, gpa;

    // input for marks
    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    
    if (marks < 0 || marks > 100) {
        cout << "Invalid input! Marks should be between 0 and 100." << endl;
    } else {
        
        if (marks >= 80) {
            gpa = 4.00;
        } else if (marks >= 75) {
            gpa = 3.75;
        } else if (marks >= 70) {
            gpa = 3.50;
        } else if (marks >= 65) {
            gpa = 3.25;
        } else if (marks >= 60) {
            gpa = 3.00;
        } else if (marks >= 55) {
            gpa = 2.75;
        } else if (marks >= 50) {
            gpa = 2.50;
        } else if (marks >= 45) {
            gpa = 2.25;
        } else if (marks >= 40) {
            gpa = 2.00;
        } else {
            gpa = 0.00;
        }

        cout << "Your GPA is: " << gpa << endl;
    }

    return 0;
}
