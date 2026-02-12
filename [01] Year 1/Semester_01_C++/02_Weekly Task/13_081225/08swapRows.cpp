// Marcos Torres 08-12-25
// 08swapRows.cpp

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

struct TRow {
    int elements[MAX_SIZE];
};

struct TMat {
    TRow rows[MAX_SIZE];
    int rowCount;
    int colCount;
};

void printMat(TMat m) {
    for (int i = 0; i < m.rowCount; i++) {
        for (int j = 0; j < m.colCount; j++) {
            cout << m.rows[i].elements[j] << " ";
        }
        cout << endl;
    }
}

void swapRows(TMat& m, int r1, int r2) {
    if (r1 >= 0 and r1 < m.rowCount and r2 >= 0 and r2 < m.rowCount) {
        TRow temp = m.rows[r1];
        m.rows[r1] = m.rows[r2];
        m.rows[r2] = temp;
    }
}

int main() {
    TMat matrix;
    matrix.rowCount = 3;
    matrix.colCount = 3;

    int count = 1;
    for (int i = 0; i < matrix.rowCount; i++) {
        for (int j = 0; j < matrix.colCount; j++) {
            matrix.rows[i].elements[j] = count;
            count++;
        }
    }

    cout << "Original Matrix:" << endl;
    printMat(matrix);

    cout << "Swapping row 0 and row 2:" << endl;
    swapRows(matrix, 0, 2);
    
    printMat(matrix);

    return 0;
}