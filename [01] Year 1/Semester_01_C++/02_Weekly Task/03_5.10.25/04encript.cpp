// 04encript.cpp
// Marcos Torres 1.10.25

#include <iostream>
using namespace std;

int main() {
    char letters[4];

    cout << "Enter your 4 letters: ";
    for (int i = 0; i < 4; ++i) {
        cin >> letters[i];
    }

    cout << "Encoded letters: ";
    for (int i = 0; i < 4; ++i) {
        cout << static_cast<char>(letters[i] + 1);
    }

    cout << endl;
    return 0;
}
