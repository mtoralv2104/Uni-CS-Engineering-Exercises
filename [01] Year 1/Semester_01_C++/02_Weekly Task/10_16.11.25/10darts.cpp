#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

int scoreThrows(TVec radiuses) {
    int totalScore = 0;
    bool allLess_than_five = true;
    
    for (int r : radiuses) {
        if (r < 5) {
            totalScore += 10;
        } else if (r <= 10) {
            totalScore += 5;
            allLess_than_five = false;
        } else {
            totalScore += 0;
            allLess_than_five = false;
        }
    }

    if (allLess_than_five) {
        totalScore += 100;
    }
    
    return totalScore;
}

int main() {
    cout << "Test 1: " << scoreThrows(TVec{1, 5, 11}) << endl;
    cout << "Test 2: " << scoreThrows(TVec{15, 20, 30}) << endl;
    cout << "Test 3: " << scoreThrows(TVec{1, 2, 3}) << endl;
    
    return 0;
}