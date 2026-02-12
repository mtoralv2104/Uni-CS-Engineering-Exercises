// 05quadratic.cpp
// Marcos Torres 05.10.2025
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c;

    cout << "Quadratic equation: ax^2 + bx + c = 0\n";
    cout << "Enter the numbers a, b y c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Error: Number 'a' can't be 0 (Not quadratic)." << endl;
        return 1;
    }

    double discriminant = (b * b - 4 * a * c);

    if (discriminant < 0) {
        cout << "No real solutions (Negative discriminant)." << endl;
    } 
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Only one solution: x = " << x << endl;
    } 
    else {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Solutions:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
