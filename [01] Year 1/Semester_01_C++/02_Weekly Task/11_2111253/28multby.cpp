// 28multby.cpp
// Marcos Torres 18-11-25
#include <iostream>
#include <string>

using namespace std;

typedef string TNat;

TNat sumNat(TNat a, TNat b) {
    string res = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 10;
        res += (sum % 10) + '0';
    }

    string finalRes = "";
    for (int k = res.size() - 1; k >= 0; --k) {
        finalRes += res[k];
    }
    
    return finalRes;
}

TNat multOne(TNat n, int d) {
    if (d == 0) return "0";
    if (d == 1) return n;

    string res = "";
    int carry = 0;
    
    for (int i = n.size() - 1; i >= 0; --i) {
        int val = (n[i] - '0') * d + carry;
        res += (val % 10) + '0';
        carry = val / 10;
    }

    while (carry > 0) {
        res += (carry % 10) + '0';
        carry /= 10;
    }

    string finalRes = "";
    for (int k = res.size() - 1; k >= 0; --k) {
        finalRes += res[k];
    }
    return finalRes;
}

TNat multBy(TNat a, TNat b) {
    if (a == "0" || b == "0") return "0";

    TNat total = "0";
    for (int i = b.size() - 1; i >= 0; --i) {
        int digit = b[i] - '0';
        TNat partial = multOne(a, digit);
        
        if (partial != "0") {
            for (int k = 0; k < (b.size() - 1 - i); ++k) {
                partial += '0';
            }
            total = sumNat(total, partial);
        }
    }
    return total;
}

int main() {
    TNat n1 = "2538945022872439382227264460631424241715810344843";
    TNat n2 = "98464993182266617687544411784683307548280902514";
    
    cout << multBy(n1, n2) << endl;

    return 0;
}