// 04large.cpp
// Marcos Torres 05.10.2025
#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, d;
    int largest;

    cout << "Enter 4 integers separated by spaces: ";
    cin >> a >> b >> c >> d;

    largest = a;

    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;

    cout << "The largest number is: " << largest << endl;

    return 0;
}
