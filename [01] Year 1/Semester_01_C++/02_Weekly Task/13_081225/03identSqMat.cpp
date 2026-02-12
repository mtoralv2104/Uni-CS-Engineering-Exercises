// Marcos Torres 08-12-25
// 03identSqMat.cpp

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

struct TSqMat {
    int data[MAX_SIZE][MAX_SIZE];
    int dim;
};

void printSqMat(TSqMat m) {
    for (int i = 0; i < m.dim; i++) {
        for (int j = 0; j < m.dim; j++) {
            cout << m.data[i][j] << " ";
        }
        cout << endl;
    }
}

TSqMat identSqMat() {
    TSqMat matrix;
    matrix.dim = 5; 

    for (int i = 0; i < matrix.dim; i++) {
        for (int j = 0; j < matrix.dim; j++) {
            if (i == j) {
                matrix.data[i][j] = 1;
            } else {
                matrix.data[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main() {
    TSqMat identityMatrix;
    identityMatrix = identSqMat();
    
    printSqMat(identityMatrix);

    return 0;
}