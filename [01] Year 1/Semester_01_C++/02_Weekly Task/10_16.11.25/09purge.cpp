#include <iostream>
#include <array> 
using namespace std;

const int N = 5;
typedef array<int, N> TVec;


void purge(TVec &v) {
    TVec temp = v;
    int current_index = 0;
    
    for (int i = 0; i < N; ++i) {
        bool is_duplicate = false;
        for (int j = 0; j < current_index; ++j) {
            if (temp.at(i) == v.at(j)) {
                is_duplicate = true;
                break;
            }
        }
        
        if (!is_duplicate) {
            v.at(current_index) = temp.at(i);
            current_index++;
        }
    }
    
    for (int i = current_index; i < N; ++i) {
        v.at(i) = 0;
    }
}

TVec purge(const TVec &v) {
    TVec result = {};
    int result_index = 0;
    
    for (int i = 0; i < N; ++i) {
        bool is_duplicate = false;
        for (int j = 0; j < result_index; ++j) {
            if (v.at(i) == result.at(j)) {
                is_duplicate = true;
                break;
            }
        }
        
        if (!is_duplicate && result_index < N) {
            result.at(result_index) = v.at(i);
            result_index++;
        }
    }
    
    return result;
}

void printTVec(const TVec &v) {
    cout << "{";
    for (int i = 0; i < N; ++i) {
        cout << v.at(i);
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

int main() {
    TVec v1 = {10, 20, 10, 30, 20}; 
    TVec v2 = {1, 1, 1, 1, 5}; 

    cout << "--- Procedure Test ---" << endl;
    cout << "Original v1: "; printTVec(v1);
    purge(v1);
    cout << "Purged v1: "; printTVec(v1);

    cout << "--- Function Test ---" << endl;
    cout << "Original v2: "; printTVec(v2);
    purge(v2);
    cout << "Purged v2: "; printTVec(v2);
    
    return 0;
}