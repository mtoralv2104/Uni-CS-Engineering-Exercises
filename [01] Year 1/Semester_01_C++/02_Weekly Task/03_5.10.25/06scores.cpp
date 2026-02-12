// 06.scores.cpp
// Marcos Torres 1.10.25

#include <iostream>
using namespace std;

int main() {
    double db_c1, db_c2, db_final_ex;

    cout << "Enter score for Control 1 (out of 10): ";
    cin >> db_c1;
    cout << "Enter score for Control 2 (out of 10): ";
    cin >> db_c2;
    cout << "Enter score for Final Exam (out of 10): ";
    cin >> db_final_ex;

    cout << "Your final grade is: " << ((((10-(db_c1*0.15+db_c2*0.25))/10)*db_final_ex)+(db_c1*0.15+db_c2*0.25));
    

    return 0;
}
