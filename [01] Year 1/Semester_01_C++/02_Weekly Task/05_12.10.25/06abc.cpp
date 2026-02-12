// 06abc.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;

int main() {
    char c;
    int state = 0;
    bool found = false;

    cout << "Enter the sequence ending with a dot (.):" << endl;

    c = cin.get();

    while (c != '.' && !found) {
        switch (state) {
            case 0:
                if (c == 'a') {
                    state = 1; 
                }
                break;

            case 1: 
                if (c == 'b') {
                    state = 2; 
                } else if (c != 'a') {
                    state = 0; 
                }
               break;

            case 2:
                if (c == 'c') {
                    found = true; 
                } else if (c == 'a') {
                    state = 1;
                } else {
                    state = 0;
                }
                break;
        }

        if (!found) {
            c = cin.get();
        }
    }

    cout << "\n--- Result ---" << endl;
    if (found) {
        cout << "The sequence \"abc\" HAS been found." << endl;
    } else {
        cout << "The sequence \"abc\" HASN'T been found" << endl;
    }

    return 0;
}