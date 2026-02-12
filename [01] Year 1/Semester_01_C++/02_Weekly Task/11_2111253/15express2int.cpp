// 15express2int.cpp
// Marcos Torres 18-11-25

#include <iostream>
#include <string>

using namespace std;

int express2int(string s);
void todo(string s);


int main() {
    todo("2+6-4");
    todo("6-4");
    todo("0-1+1");
    todo("2+634-4");
    todo(" 634 - 4 ");
    todo(" 2 + 634 - 4");
    todo(" 123 ");
    todo(" -123 - 1");

    return 0;
}

void todo(string s) {
    cout << s << " : " << express2int(s) << endl;
}

int express2int(string s) {
    int r = 0;         
    int current_num = 0;
    int sign = 1;  

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (c >= '0' && c <= '9') {
            current_num = current_num * 10 + (c - '0');
        } 
        else if (c == '+') {
            r += sign * current_num;
            
            current_num = 0;
            sign = 1;
        } 
        else if (c == '-') {
            r += sign * current_num;
            
            current_num = 0;
            sign = -1;
        }
    }

    r += sign * current_num;

    return r;
}