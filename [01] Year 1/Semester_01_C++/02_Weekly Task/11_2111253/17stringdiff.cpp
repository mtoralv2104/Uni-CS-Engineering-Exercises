// 17stringdiff.cpp
// Marcos Torres 18-11-25
#include <iostream>
#include <string>

using namespace std;

string diff(string s, string t) {
    string result = "";
    for (int i = 0; i < s.size(); ++i) {
        bool found = false;
        for (int j = 0; j < t.size(); ++j) {
            if (s[i] == t[j]) {
                found = true;
            }
        }
        if (!found) {
            result += s[i];
        }
    }
    return result;
}

int main() {
    cout << "telephone - phonograph = " << diff("telephone", "phonograph") << endl;
    cout << "holograph - dog = " << diff("holograph", "dog") << endl;
    return 0;
}