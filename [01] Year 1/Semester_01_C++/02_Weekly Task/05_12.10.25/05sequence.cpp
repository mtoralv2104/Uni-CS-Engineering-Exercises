// 05sequence.cpp
// Marcos Torres 07.10.25.
#include <iostream>
using namespace std;

int main() {
    int n;
    int numeroActual;
    bool encontrado = false;


    do {
        cout << "Enter the number you want to search (cant be 0): ";
        cin >> n;
        if (n == 0) {
            cout << "Error: Number can't be 0. Try again." << endl;
        }
    } while (n == 0);

    cout << "Enter the number sequence (Ending in 0):" << endl;
    
    cin >> numeroActual;

    while (numeroActual != 0) {
        if (numeroActual == n) {
            encontrado = true; 
            break;             
        }
 
        cin >> numeroActual;
    }


    cout << "\n--- Result ---" << std::endl;
    if (encontrado) {
        cout << "Number " << n << " HAS been found" << endl;
    } else {
        cout << "Number " << n << " HASN'T been found" << endl;
    }

    return 0;
}