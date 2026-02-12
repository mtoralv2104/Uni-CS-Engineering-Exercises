// 08bmi.cpp
// Marcos Torres 1.10.25
#include <iostream>
using namespace std;

int main() {
    double db_weight, db_height, db_bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> db_weight;

    cout << "Enter your height in meters: ";
    cin >> db_height;

    db_bmi = db_weight / (db_height * db_height);

    cout << "Your Body Mass Index (BMI) is: " << db_bmi << endl;

    return 0;
}