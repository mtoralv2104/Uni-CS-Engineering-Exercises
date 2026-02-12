#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 1000;
typedef array<float, N> TVec;

void randFloatArr(TVec &a, float min, float max) {
    for (int i = 0; i < a.size(); i++) {
        a[i] = ((float)rand() / RAND_MAX) * (max - min) + min;
    }
}

void printTVec(const TVec &a, const char* title) {
    cout << title << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
        if ((i + 1) % 10 == 0) {
            cout << endl;
        } else if (i < a.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

void swap(float &a, float &b) {
    float t = a;
    a = b;
    b = t;
}

void BubbleSort(TVec &a) {
    for (int top = a.size() - 1; top >= 1; top--) {
        for (int i = 0; i < top; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
}

int main() {
    srand(time(0));
    
    TVec myArray;
    float min_val = 10.0f;
    float max_val = 50.0f;

    randFloatArr(myArray, min_val, max_val);

    cout.precision(4);
    cout << fixed;
    
    printTVec(myArray, "--- Original Random Array (First 1000 Floats) ---");

    BubbleSort(myArray);

    printTVec(myArray, "--- Sorted Array (Bubble Sort) ---");
    
    return 0;
}