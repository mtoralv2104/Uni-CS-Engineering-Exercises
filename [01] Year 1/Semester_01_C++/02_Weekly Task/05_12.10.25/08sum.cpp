// 08sum.cpp
// Marcos Torres 07.10.25
#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0; 

    cout << "Enter the first number in the sequence (0 to quit):" << endl;
    cin >> num;

    while (num != 0 && sum != num) {
        sum += num;

        cout << "Enter the next number:" << endl;
        cin >> num;
    }

    cout << "\n--- Loop Terminated ---" << endl;
    cout << "The final sum of the processed elements is: " << sum << endl;
    cout << "The last number entered (which stopped the sequence) was: " << num << endl;

    return 0;
}