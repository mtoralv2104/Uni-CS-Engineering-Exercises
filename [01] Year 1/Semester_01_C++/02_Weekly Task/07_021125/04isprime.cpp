// 4.printIsPrime.cpp
// Marcos Torres 03-11-25
#include <iostream>
using namespace std;

typedef long long Tlong;

bool verificarSiEsPrimo(Tlong numero)
{
    bool respuesta;

    if (numero <= 1)
    {
        respuesta = false;
    }
    else if (numero == 2)
    {
        respuesta = true;
    }
    else if (numero % 2 == 0)
    {
        respuesta = false;
    }
    else
    {
        Tlong divisor = 3;
        while (divisor * divisor <= numero && numero % divisor != 0)
        {
            divisor += 2;
        }
        respuesta = divisor * divisor > numero;
    }
    return respuesta;
}

void imprimirResultadoPrimo(int numero)
{
    if (verificarSiEsPrimo(numero))
    {
        cout << "The number " << numero << " is Prime" << endl;
    }
    else
    {
        cout << "The number " << numero << " is Not prime" << endl;
    }
}

int main()
{
    imprimirResultadoPrimo(7);
    imprimirResultadoPrimo(1);
    imprimirResultadoPrimo(10);
    imprimirResultadoPrimo(17);
    return 0;
}