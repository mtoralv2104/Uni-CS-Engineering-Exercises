// Marcos Torres 08-12-25
// 06transpose.cpp

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

TSqMat transpose(TSqMat a) {
    for (int i = 0; i < a.dim; i++) {
        for (int j = i + 1; j < a.dim; j++) {
            int temp = a.data[i][j];
            a.data[i][j] = a.data[j][i];
            a.data[j][i] = temp;
        }
    }
    return a;
}

int main() {
    TSqMat matrix;
    matrix.dim = 3;

    int count = 1;
    for (int i = 0; i < matrix.dim; i++) {
        for (int j = 0; j < matrix.dim; j++) {
            matrix.data[i][j] = count;
            count++;
        }
    }

    cout << "Original Matrix:" << endl;
    printSqMat(matrix);

    TSqMat transposedMatrix = transpose(matrix);

    cout << "Transposed Matrix:" << endl;
    printSqMat(transposedMatrix);

    return 0;
}