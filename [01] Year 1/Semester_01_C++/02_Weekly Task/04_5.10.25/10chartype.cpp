// 10chartype.cpp
// Marcos Torres 05.10.2025
#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (c >= '0' && c <= '9') {
        cout << "It is a digit" << endl;
    } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << "It is a lowercase vowel" << endl;
    } else {
        cout << "It is something else" << endl;
    }

    return 0;
}
