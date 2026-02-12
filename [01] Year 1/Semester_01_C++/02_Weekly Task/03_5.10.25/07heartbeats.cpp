// 07heartbeats.cpp
// Marcos Torres 1.10.25
#include <iostream>
using namespace std;

int main() {
    int age, b;

    cout << "Enter your age in years: ";
    cin >> age;

    b = 220 - age;

    cout << "Your maximum heart rate is: " << b << " beats per minute." << endl;

    return 0;
}