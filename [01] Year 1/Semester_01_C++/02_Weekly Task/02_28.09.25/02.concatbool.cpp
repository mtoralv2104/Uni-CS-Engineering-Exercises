#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter your number: ";

    cin >> x;

    if ((1<=x) && (100>=x)){
        cout<<"The number is greater (or equal) than 1 and lower (or equal) than 100";
    
}

    else{
        cout<<"The number is lower (or equal) than 1 or greater (or equal) than 100";

    }

}