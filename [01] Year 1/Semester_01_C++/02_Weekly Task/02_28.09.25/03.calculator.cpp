// 03.calculator.cpp
// Marcos_TA 28.09.25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, r;
    char op;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Enter a char for the operation: (+-*/^): ";
    cin >> op;
    if (op == '+')
        r = a + b;
    else if (op == '-')
        r = a - b;
    else if (op == '*')
        r = a * b;
    else if (op == '/')
        r = a / b;
    else if (op == '^')
        r = pow(a,b);
    else {
        cout << "Error: wrong operation " << op << " use only: +-*/^" << endl;
        r = 0;
    }
    cout << "r: " << r << endl;
return 0;


}