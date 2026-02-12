// 29pow.cpp
// Marcos Torres 18-11-25
#include <iostream>
#include <string>
#include <vector>

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

TNat pow(TNat b, TNat exp) {
    long long e = 0;
    for (int i = 0; i < exp.size(); ++i) {
        e = e * 10 + (exp[i] - '0');
    }

    if (e == 0) return "1";

    TNat res = "1";
    for (long long i = 0; i < e; ++i) {
        res = multBy(res, b);
    }
    return res;
}

int main() {
    TNat base = "25389450";
    TNat exponent = "9";
    
    cout << base << " ^ " << exponent << " =" << endl;
    cout << pow(base, exponent) << endl;

    return 0;
}