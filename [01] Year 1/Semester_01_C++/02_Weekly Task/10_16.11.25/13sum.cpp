#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

int midpointSum(TVec a, int size) {
    if (size < 3) {
        return -1;
    }
    
    int totalSum = 0;
    for (int i = 0; i < size; ++i) {
        totalSum += a[i];
    }
    
    int leftSum = 0;
    
    for (int i = 1; i < size - 1; ++i) {
        leftSum += a[i - 1];
        
        int rightSum = totalSum - leftSum - a[i];
        
        if (leftSum == rightSum) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    TVec t1 = TVec {4, 1, 7, 9, 3};
    cout << "Test 1: " << midpointSum(t1, 6) << endl;
    
    TVec t2 = TVec {4, 4, 4, 4, 4};
    cout << "Test 2: " << midpointSum(t2, 6) << endl;

    TVec t3 = TVec{16, 4, 4, 4, 4};
    cout << "Test 3: " << midpointSum(t3, 6) << endl;

    TVec t4 = {1, 2, 3, 4, 5};
    cout << "Test 4: " << midpointSum(t4, 4) << endl;
    
    return 0;
}