// Marcos Torres 08-12-25
// 02fillRandMat.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SIZE = 100;

struct TMat {
    int data[MAX_SIZE][MAX_SIZE];
    int rows;
    int cols;
};

void printMat(TMat m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            cout << m.data[i][j] << " ";
        }
        cout << endl;
    }
}

void fillRandMat(TMat& m) {
    srand(time(0));
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            m.data[i][j] = rand();
        }
    }
}

int main() {
    TMat matrix;
    matrix.rows = 4;
    matrix.cols = 4;

    fillRandMat(matrix);
    printMat(matrix);

    return 0;
}