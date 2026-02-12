# include <iostream>
# include <windows.h>
using namespace std ;

int main () {

    float number, sum, lowest, largest;
    int n_loops = 0;

while (number!=0){


    ++n_loops;
    
    cout <<  "Enter your number: [0 to EXIT]" << endl;
    cin >> number;

    sum = sum + number;

    if (n_loops == 0){
        lowest = number;
        largest = number;

    }

    if (lowest >= number){
        lowest = number;
    }

    if (largest<= number){
        largest = number;
    }

}
if (sum == 0){
    cout << "ERROR";
}
else{

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << (sum/n_loops) << endl;
    cout << "The highest: " << largest << endl;
    cout << "The lowest: " << lowest << endl;
}
Sleep(5000);
return 0;
}