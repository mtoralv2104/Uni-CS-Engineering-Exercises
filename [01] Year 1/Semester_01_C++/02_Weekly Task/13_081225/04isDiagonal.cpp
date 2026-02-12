// Marcos Torres 08-12-25
// 04isDiagonal.cpp

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

struct TSqMat {
    int data[MAX_SIZE][MAX_SIZE];
    int dim;
};

bool isDiagonal(TSqMat m) {
    bool isDiag = true;
    for (int i = 0; i < m.dim and isDiag; i++) {
        for (int j = 0; j < m.dim and isDiag; j++) {
            if (i != j and m.data[i][j] != 0) {
                isDiag = false;
            }
        }
    }
    return isDiag;
}

int main() {
    TSqMat matrix;
    matrix.dim = 3;

    matrix.data[0][0] = 1; matrix.data[0][1] = 0; matrix.data[0][2] = 0;
    matrix.data[1][0] = 0; matrix.data[1][1] = 5; matrix.data[1][2] = 0;
    matrix.data[2][0] = 0; matrix.data[2][1] = 0; matrix.data[2][2] = 9;

    if (isDiagonal(matrix)) {
        cout << "The matrix is diagonal" << endl;
    } else {
        cout << "The matrix is not diagonal" << endl;
    }

    return 0;
}