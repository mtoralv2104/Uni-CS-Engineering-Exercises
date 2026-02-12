// 1.digitAtp.cpp
// Marcos Torres 03-11-25

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int obtenerDigitoEnPos(int numero, int posicion)
{
    int numeroAbsoluto = abs(numero);

    if (posicion <= 0) 
    {
        return 0;
    }
    
    int divisor = pow(10, posicion - 1);
    
    if (numeroAbsoluto / divisor == 0) 
    {
        return 0;
    }
    
    return (numeroAbsoluto / divisor) % 10;
}

int main()
{
    cout << obtenerDigitoEnPos(1492, 1) << endl; 
    cout << obtenerDigitoEnPos(1492, 3) << endl; 
    cout << obtenerDigitoEnPos(1492, 6) << endl; 
    return 0;
}