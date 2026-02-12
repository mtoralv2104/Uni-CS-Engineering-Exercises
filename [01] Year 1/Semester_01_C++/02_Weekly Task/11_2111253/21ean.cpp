// 21ean.cpp
// Marcos Torres 18-11-25
#include <iostream>
#include <string>

using namespace std;

bool isValidEAN(string ean) {
    int sum = 0;
    
    for (int i = 0; i < 12; ++i) {
        int digit = ean[i] - '0';
        if (i % 2 == 0) {
            sum += digit * 1;
        } else {
            sum += digit * 3;
        }
    }

    int computed_checksum = 0;
    if (sum % 10 != 0) {
        computed_checksum = 10 - (sum % 10);
    }

    int actual_checksum = ean[12] - '0';

    return computed_checksum == actual_checksum;
}

int main() {
    if (isValidEAN("4003301018398")) {
        cout << "4003301018398 is valid" << endl;
    } else {
        cout << "4003301018398 is invalid" << endl;
    }

    if (isValidEAN("4003301018392")) {
        cout << "4003301018392 is valid" << endl;
    } else {
        cout << "4003301018392 is invalid" << endl;
    }

    return 0;
}