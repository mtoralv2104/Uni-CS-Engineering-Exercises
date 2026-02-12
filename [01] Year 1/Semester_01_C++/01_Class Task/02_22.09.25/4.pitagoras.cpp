#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float b, c, a;

    cout << "Enter length side a: ";
    cin >> b;

    cout << "Enter length side b: ";
    cin >> c;

    c = sqrt(b * b + a * a);

    cout << "The hypotenuse (c) is: " << c << endl;

    return 0;
}