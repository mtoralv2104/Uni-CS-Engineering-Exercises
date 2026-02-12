// 05bytes.cpp
// Marcos Torres 1.10.25

#include <iostream>
using namespace std;

int main() 
{

    const int Kb = 1024;
    const int Mb = 1024 * Kb;

    int int_totalBytes;
    cout << "Enter number of bytes: ";
    cin >> int_totalBytes;

    int mb = int_totalBytes / Mb;
    int_totalBytes = int_totalBytes % Mb;

    int kb = int_totalBytes / Kb;
    int_totalBytes = int_totalBytes % Kb;

    
    int b = int_totalBytes;

    cout << mb << " Mb, " << kb << " Kb, and " << b << " b" << endl;

    return 0;
}