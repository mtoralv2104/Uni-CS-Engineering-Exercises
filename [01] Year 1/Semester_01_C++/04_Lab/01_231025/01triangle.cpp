// 01triangle.cpp
// Marcos Torres 23-10-25
#include <iostream>
using namespace std;

void triangle(int h) 
{
    for (int line = 0; line < h; line++) {
        int num = line + 1;
        for (int s = 0; s < h - line - 1; s++) {
            cout << " ";
        }
        for (int j = 0; j <= line; j++) {
            cout << num % 10;
            num++;
        }
        num -= 2;
        for (int j = 0; j < line; j++) {
            cout << num % 10;
            num--;
        }

        cout << endl;
    }
}

int main() {
    triangle(6);
    return 0;
}
