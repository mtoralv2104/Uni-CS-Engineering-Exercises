#include <iostream>
#include <array>

using namespace std;

const int N = 10;
typedef array<int, N> TVec;

int is_even(int n) {
    return (n % 2 == 0);
}

int parityOutlier(TVec a, int size) {
    if (size <= 2) {
        return -1;
    }

    int count_even = 0;
    int count_odd = 0;
    
    int outlier_index = -1;
    int outlier_parity_type = -1;

    for (int i = 0; i < size; ++i) {
        int parity = is_even(a[i]);

        if (parity == 1) {
            count_even++;
        } else {
            count_odd++;
        }
    }
    
    if (count_even == 1) {
        outlier_parity_type = 1;
    } else if (count_odd == 1) {
        outlier_parity_type = 0;
    } else {
        return -1;
    }

    for (int i = 0; i < size; ++i) {
        if (is_even(a[i]) == outlier_parity_type) {
            outlier_index = i;
            break;
        }
    }
    
    return outlier_index;
}

int main() {
    TVec t1 = {0, 100, 4, 11};
    cout << "Test 1: " << parityOutlier(t1, 4) << endl; 
    
    TVec t2 = {160, 19, 11, 13};
    cout << "Test 2: " << parityOutlier(t2, 4) << endl; 
    
    TVec t3 = {1, 1, 2, 1};
    cout << "Test 3: " << parityOutlier(t3, 4) << endl; 
    
    TVec t4 = {1, 1, 2, 2};
    cout << "Test 4: " << parityOutlier(t4, 4) << endl; 
    
    TVec t5 = {10, 20, 30, 40};
    cout << "Test 5: " << parityOutlier(t5, 4) << endl; 
    
    return 0;
}