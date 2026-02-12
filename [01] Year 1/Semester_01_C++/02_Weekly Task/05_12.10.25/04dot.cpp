// 04dot.cpp
// Marcos Torres 07.10.25
#include <iostream>
#include <cctype> // i use cctype
using namespace std;


int main() {
    int contadorVocales=0;
    int contadorMayusculas=0;
    int contadorNoLetras=0;
    char c;

    cout << "Enter your characters ending with a dot (.):" << endl;

    c = cin.get();

    while (c != '.') {

        char c_minuscula = tolower(c);
        if (c_minuscula == 'a' || c_minuscula == 'e' || c_minuscula == 'i' || c_minuscula == 'o' || c_minuscula == 'u') {
            contadorVocales++;
        }

        if (isupper(c)) {
            contadorMayusculas++;
        }

        if (!isalpha(c)) {
            contadorNoLetras++;
        }

        c = cin.get();
    }

    cout << "\n--- Results ---" << endl;
    cout << "Number of vowels: " << contadorVocales << endl;
    cout << "Number of uppercase letters: " << contadorMayusculas << endl;
    cout << "Non-letter characters: " << contadorNoLetras << endl;

    return 0;
}