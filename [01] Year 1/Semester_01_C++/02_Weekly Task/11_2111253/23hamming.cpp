// 23hamming.cpp
// Marcos Torres 18-11-25
#include <iostream>
#include <string>

using namespace std;

int hamming(string a, string b) {
    int distance = 0;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            distance++;
        }
    }
    return distance;
}

int main() {
    cout << "hamming(\"100101\", \"101001\") : " << hamming("100101", "101001") << endl;
    cout << "hamming(\"1010\", \"0101\") : " << hamming("1010", "0101") << endl;
    return 0;
}