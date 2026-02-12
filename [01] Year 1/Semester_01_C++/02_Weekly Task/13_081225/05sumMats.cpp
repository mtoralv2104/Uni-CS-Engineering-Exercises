// Marcos Torres 08-12-25
// 05sumMats.cpp

#include <iostream>

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

TMat sumMats(TMat a, TMat b) {
    TMat res;
    res.rows = a.rows;
    res.cols = a.cols;

    for (int i = 0; i < res.rows; i++) {
        for (int j = 0; j < res.cols; j++) {
            res.data[i][j] = a.data[i][j] + b.data[i][j];
        }
    }
    return res;
}

int main() {
    TMat matrixA;
    matrixA.rows = 2;
    matrixA.cols = 2;
    matrixA.data[0][0] = 1; matrixA.data[0][1] = 2;
    matrixA.data[1][0] = 3; matrixA.data[1][1] = 4;

    TMat matrixB;
    matrixB.rows = 2;
    matrixB.cols = 2;
    matrixB.data[0][0] = 5; matrixB.data[0][1] = 6;
    matrixB.data[1][0] = 7; matrixB.data[1][1] = 8;

    cout << "Matrix A:" << endl;
    printMat(matrixA);
    cout << "Matrix B:" << endl;
    printMat(matrixB);

    TMat resultMatrix = sumMats(matrixA, matrixB);

    cout << "Sum Result:" << endl;
    printMat(resultMatrix);

    return 0;
}