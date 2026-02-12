// 03calculator.cpp
// Marcos Torres 06.10.2025
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /, %, ^): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    double result;

    switch (op) {
        case '+':
            result = a + b;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = a - b;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = a * b;
            cout << "Result: " << result << endl;
            break;

        case '/':
            if (b == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << "Result: " << a / b << endl;
            break;

        case '%':
            if (b == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << "Result: " << static_cast<int>(a) % static_cast<int>(b) << endl;
            break;

        case '^':
            cout << "Result: " << pow(a, b) << endl;
            break;

        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}