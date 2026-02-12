// 02factorial.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;

main(){
    int n, contador;
    cout << "Enter the number you want to know the factorial: ";
    cin >> n;
    if (n<1)
    {
        cout << "Error";
        return 0;
    }
    contador = n-1;
    while (contador>=2)
    {
        n = n*contador;
        contador--;

    }
    cout << "El resultado es: " << n;
    return 0;
}