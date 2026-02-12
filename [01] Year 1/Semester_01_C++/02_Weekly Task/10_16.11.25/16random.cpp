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

float calculateAverage(const TVec &a) {
    float sum = 0.0f;
    for (float val : a) {
        sum += val;
    }
    return sum / a.size();
}

void printTVec(const TVec &a) {
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

int main() {
    srand(time(0));
    
    TVec myArray;
    float min_val = 10.0f;
    float max_val = 50.0f;

    randFloatArr(myArray, min_val, max_val);

    printTVec(myArray);

    float average = calculateAverage(myArray);
    
    cout.precision(4);
    cout << fixed;
    cout << "Array size: " << N << endl;
    cout << "Min value: " << min_val << endl;
    cout << "Max value: " << max_val << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}