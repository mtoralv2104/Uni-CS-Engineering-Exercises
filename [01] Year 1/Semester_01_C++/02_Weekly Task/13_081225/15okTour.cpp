// Marcos Torres 08-12-25
// 15okTour.cpp

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

struct TSqMat {
    int data[MAX_SIZE][MAX_SIZE];
    int dim;
};

bool okTour(TSqMat m) {
    int n = m.dim;
    int total = n * n;
    int r = -1;
    int c = -1;
    bool foundStart = false;

    for (int i = 0; i < n and not foundStart; i++) {
        for (int j = 0; j < n and not foundStart; j++) {
            if (m.data[i][j] == 1) {
                r = i;
                c = j;
                foundStart = true;
            }
        }
    }

    bool correct = foundStart;
    int currentVal = 1;

    while (correct and currentVal < total) {
        bool foundNext = false;
        int nextR = -1;
        int nextC = -1;

        int dr[] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dc[] = {1, 2, 2, 1, -1, -2, -2, -1};

        for (int k = 0; k < 8 and not foundNext; k++) {
            int tryR = r + dr[k];
            int tryC = c + dc[k];

            if (tryR >= 0 and tryR < n and tryC >= 0 and tryC < n) {
                if (m.data[tryR][tryC] == currentVal + 1) {
                    foundNext = true;
                    nextR = tryR;
                    nextC = tryC;
                }
            }
        }

        if (foundNext) {
            r = nextR;
            c = nextC;
            currentVal++;
        } else {
            correct = false;
        }
    }
    
    return correct;
}

int main() {
    TSqMat matrix;
    matrix.dim = 5;

    matrix.data[0][0] = 1;  matrix.data[0][1] = 14; matrix.data[0][2] = 19; matrix.data[0][3] = 8;  matrix.data[0][4] = 25;
    matrix.data[1][0] = 6;  matrix.data[1][1] = 9;  matrix.data[1][2] = 2;  matrix.data[1][3] = 13; matrix.data[1][4] = 18;
    matrix.data[2][0] = 15; matrix.data[2][1] = 20; matrix.data[2][2] = 7;  matrix.data[2][3] = 24; matrix.data[2][4] = 3;
    matrix.data[3][0] = 10; matrix.data[3][1] = 5;  matrix.data[3][2] = 22; matrix.data[3][3] = 17; matrix.data[3][4] = 12;
    matrix.data[4][0] = 21; matrix.data[4][1] = 16; matrix.data[4][2] = 11; matrix.data[4][3] = 4;  matrix.data[4][4] = 23;

    if (okTour(matrix)) {
        cout << "The knight's tour is valid" << endl;
    } else {
        cout << "The knight's tour is invalid" << endl;
    }

    return 0;
}