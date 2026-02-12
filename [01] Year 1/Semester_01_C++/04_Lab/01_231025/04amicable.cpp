// 04amicable.cpp
// Marcos Torres 23-10-25
#include <iostream>
using namespace std;
bool amicable(int a, int b) {
    int sumA = 0, sumB = 0;

    for (int i = 1; i < a; i++) {
        if (a % i == 0)
            sumA += i;
    }

    for (int i = 1; i < b; i++) {
        if (b % i == 0)
            sumB += i;
    }

    return (sumA == b && sumB == a);
}


void printRes(int a, int b) {
    if (amicable(a, b))
        cout << "The numbers " << a << " and " << b << " ARE amicable" << endl;
    else
        cout << "The numbers " << a << " and " << b << " are NOT amicable" << endl;
}

int main() {
    printRes(1184, 1210);   
    printRes(220, 284);     
    printRes(5, 6);         
    printRes(2620, 2924);   
return 0;
}
