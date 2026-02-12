// Marcos Torres 08-12-25
// 10multMat.cpp

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

struct TMatNK {
    int data[MAX_SIZE][MAX_SIZE];
    int rows;
    int cols;
};

struct TMatKM {
    int data[MAX_SIZE][MAX_SIZE];
    int rows;
    int cols;
};

struct TMatNM {
    int data[MAX_SIZE][MAX_SIZE];
    int rows;
    int cols;
};

void printMat(TMatNM m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            cout << m.data[i][j] << " ";
        }
        cout << endl;
    }
}

TMatNM multMat(TMatNK a, TMatKM b) {
    TMatNM res;
    res.rows = a.rows;
    res.cols = b.cols;

    for (int i = 0; i < res.rows; i++) {
        for (int j = 0; j < res.cols; j++) {
            res.data[i][j] = 0;
            for (int k = 0; k < a.cols; k++) {
                res.data[i][j] = res.data[i][j] + (a.data[i][k] * b.data[k][j]);
            }
        }
    }
    return res;
}

int main() {
    TMatNK matrixA;
    matrixA.rows = 2;
    matrixA.cols = 3;
    matrixA.data[0][0] = 1; matrixA.data[0][1] = 2; matrixA.data[0][2] = 3;
    matrixA.data[1][0] = 4; matrixA.data[1][1] = 5; matrixA.data[1][2] = 6;

    TMatKM matrixB;
    matrixB.rows = 3;
    matrixB.cols = 2;
    matrixB.data[0][0] = 7; matrixB.data[0][1] = 8;
    matrixB.data[1][0] = 9; matrixB.data[1][1] = 1;
    matrixB.data[2][0] = 2; matrixB.data[2][1] = 3;

    TMatNM resultMatrix = multMat(matrixA, matrixB);

    printMat(resultMatrix);

    return 0;
}