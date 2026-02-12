// 11freqs.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <array>
#include <string>
using namespace std;
typedef array<int, 256> TFreq;


int main() 
{
    TFreq freqs(string s);

    string s = "Charles' suit";
    TFreq f = freqs(s);

        for(char c : s) {
        cout << c << " " << f[(unsigned char)c] << " ";
    }
    cout << endl;

    return 0;
}



TFreq freqs(string s) {
    TFreq f{};
    f.fill(0);           

    for(unsigned char c : s) {
        f[c]++;       
    }
    return f;
}

