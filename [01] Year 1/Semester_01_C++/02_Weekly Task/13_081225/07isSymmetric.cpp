// Marcos Torres 08-12-25
// 07isSymmetric.cpp

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

struct TSqMat {
    int data[MAX_SIZE][MAX_SIZE];
    int dim;
};

bool isSymmetric(TSqMat m) {
    bool isSym = true;
    for (int i = 0; i < m.dim and isSym; i++) {
        for (int j = i + 1; j < m.dim and isSym; j++) {
            if (m.data[i][j] != m.data[j][i]) {
                isSym = false;
            }
        }
    }
    return isSym;
}

int main() {
    TSqMat matrix;
    matrix.dim = 3;

    matrix.data[0][0] = 1; matrix.data[0][1] = 2; matrix.data[0][2] = 3;
    matrix.data[1][0] = 2; matrix.data[1][1] = 4; matrix.data[1][2] = 5;
    matrix.data[2][0] = 3; matrix.data[2][1] = 5; matrix.data[2][2] = 6;

    if (isSymmetric(matrix)) {
        cout << "The matrix is symmetric" << endl;
    } else {
        cout << "The matrix is not symmetric" << endl;
    }

    return 0;
}