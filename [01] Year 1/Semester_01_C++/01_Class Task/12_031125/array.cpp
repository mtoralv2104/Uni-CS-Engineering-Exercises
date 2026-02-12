// array.cpp
// Marcos Torres 03-11-25
#include <iostream>
#include <array>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int total = sumArray(arr, 5);

    cout << "The sum of the array elements is: " << total << endl;

    return 0;
}
