// Marcos Torres 08-12-25
// 17averageMLargest.cpp

#include <iostream>

using namespace std;

const int MAX_LIMIT = 100;

int readM() {
    int m = 0;
    bool isValid = false;
    while (not isValid) {
        cout << "Enter M (1 - " << MAX_LIMIT << "): ";
        cin >> m;
        if (m > 0 and m <= MAX_LIMIT) {
            isValid = true;
        }
    }
    return m;
}

int findMinIndex(int data[], int count) {
    int minIndex = 0;
    for (int i = 1; i < count; i++) {
        if (data[i] < data[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

double calculateAverage(int data[], int count) {
    double sum = 0;
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            sum += data[i];
        }
        return sum / count;
    }
    return 0.0;
}

int main() {
    int m = readM();
    int largestNumbers[MAX_LIMIT];
    int count = 0;
    int num;
    
    cout << "Enter sequence (end with 0): ";
    cin >> num;

    while (num != 0) {
        if (count < m) {
            largestNumbers[count] = num;
            count++;
        } else {
            int minIndex = findMinIndex(largestNumbers, count);
            if (num > largestNumbers[minIndex]) {
                largestNumbers[minIndex] = num;
            }
        }
        cin >> num;
    }

    double average = calculateAverage(largestNumbers, count);
    
    cout << "Average of the " << count << " largest numbers: " << average << endl;

    return 0;
}