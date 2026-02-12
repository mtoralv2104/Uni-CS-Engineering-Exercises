// 02prices.cpp
// Marcos Torres 06.10.2025
#include <iostream>
using namespace std;

int main() {
    int int_quantity;
    double unitPrice, total;

    cout << "Quantity: ";
    cin >> int_quantity;

    if (int_quantity == 1)
        unitPrice = 100;
    else if (int_quantity == 2)
        unitPrice = 95;
    else if (int_quantity == 3)
        unitPrice = 90;
    else if (int_quantity >= 4)
        unitPrice = 85;
    else {
        cout << "Invalid quantity!" << endl;
        return 1;
    }

    cout << "Total: " << int_quantity * unitPrice << " euros" << endl;

    return 0;
}