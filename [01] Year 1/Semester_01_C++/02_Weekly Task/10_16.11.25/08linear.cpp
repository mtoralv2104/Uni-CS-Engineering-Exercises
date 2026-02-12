#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;



float absolute(float f) {
    return (f < 0.0f) ? -f : f;
}

void linearApproach(TVec x, TVec y, float &a, float &b) {
    int n = N;
    float sum_x = 0.0f;
    float sum_y = 0.0f;
    float sum_xy = 0.0f;
    float sum_x_sq = 0.0f;

    for (int i = 0; i < n; ++i) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x_sq += x[i] * x[i];
    }

    float float_n = (float)n;
    
    float numerator_a = (float_n * sum_xy) - (sum_x * sum_y);
    float denominator_a = (float_n * sum_x_sq) - (sum_x * sum_x);

    if (absolute(denominator_a) < 0.000001f) {
        a = 0.0f; 
        b = 0.0f;
        return;
    }

    a = numerator_a / denominator_a;

    b = (sum_y - (a * sum_x)) / float_n;
}

int main() {
    float a, b;
    
    linearApproach( TVec{0, 1, 3, 5, 7}, TVec{1, 0, 2, 4, 6}, a, b);

    cout.precision(7);
    cout << fixed;

    cout << "Calculated a: " << a << endl;
    cout << "Calculated b: " << b << endl;
    
    return 0;
}