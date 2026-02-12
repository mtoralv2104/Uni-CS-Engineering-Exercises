// Marcos Torres 08-12-25
// 01printMat.cpp

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

int main() {
    TMat matrix;
    matrix.rows = 3;
    matrix.cols = 3;

    int count = 1;
    for (int i = 0; i < matrix.rows; i++) {
        for (int j = 0; j < matrix.cols; j++) {
            matrix.data[i][j] = count;
            count++;
        }
    }

    printMat(matrix);

    return 0;
}