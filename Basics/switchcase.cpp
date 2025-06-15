#include <bits/stdc++.h>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter operator (+, -, *, /, %, ^, r, a): ";
    cin >> op;

    if (op == 'r' || op == 'a') {
        cout << "Enter number: ";
        cin >> num1;
    } else {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case '%':
            if ((int)num2 != 0)
                cout << "Result: " << (int)num1 % (int)num2 << endl;
            else
                cout << "Error: Modulo by zero!" << endl;
            break;
        case '^':
            cout << "Result: " << pow(num1, num2) << endl;
            break;
        case 'r':
            if (num1 >= 0)
                cout << "Result: " << sqrt(num1) << endl;
            else
                cout << "Error: Square root of negative number!" << endl;
            break;
        case 'a':
            cout << "Result: " << abs(num1) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
