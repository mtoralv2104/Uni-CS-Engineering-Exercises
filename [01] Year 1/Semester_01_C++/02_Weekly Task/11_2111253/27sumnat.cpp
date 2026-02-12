// 27sumnat.cpp
// Marcos Torres 18-11-25
#include <iostream>
#include <string>

using namespace std;

typedef string TNat;

TNat sumNat(TNat a, TNat b) {
    string ra = "";
    for (int i = a.size() - 1; i >= 0; --i) {
        ra += a[i];
    }
    
    string rb = "";
    for (int i = b.size() - 1; i >= 0; --i) {
        rb += b[i];
    }

    string res = "";
    int carry = 0;
    int lenA = ra.size();
    int lenB = rb.size();
    
    int maxLen = lenA;
    if (lenB > maxLen) {
        maxLen = lenB;
    }

    for (int i = 0; i < maxLen; ++i) {
        int d1 = 0;
        if (i < lenA) {
            d1 = ra[i] - '0';
        }
        
        int d2 = 0;
        if (i < lenB) {
            d2 = rb[i] - '0';
        }
        
        int sum = d1 + d2 + carry;
        res += (sum % 10) + '0';
        carry = sum / 10;
    }
    
    if (carry > 0) {
        res += carry + '0';
    }

    string finalRes = "";
    for (int i = res.size() - 1; i >= 0; --i) {
        finalRes += res[i];
    }
    
    return finalRes;
}

void test(TNat a, TNat b) {
    cout << "sumNat(\"" << a << "\", \"" << b << "\") : " << sumNat(a, b) << endl;
}

int main() {
    test("1", "1");
    test("122345", "98765");
    test("11112222333344445555666677778888999", "11112222333344445555666677778888999");
    return 0;
}