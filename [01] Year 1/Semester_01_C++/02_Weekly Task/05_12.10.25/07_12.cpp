// 07_12.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;

int main() {
    int num;  
    int pos = 0;  
    int first = 0; 
    int last = 0; 

    cout << "Enter a sequence of integers ending in 0:" << endl;

    cin >> num;

    while (num != 0) {
        pos++;

        if (num == 12) {
            if (first == 0) {
                first = pos;
            }
            last = pos;
        }
        cin >> num;
    }

    cout << "\nResult:" << endl;
    cout << first << ", " << last << "." << endl;

    return 0;
}