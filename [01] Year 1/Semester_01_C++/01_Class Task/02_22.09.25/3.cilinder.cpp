#include <iostream>
using namespace std;

const float PI = 3.141592;

int main()
{

    float radius, height, volume;
    
    cout << "Enter cylinder radius: ";
    cin >> radius;

    cout << "Enter cylinder height: ";
    cin >> height;

    volume = PI * radius * radius * height;

    cout << " Volume: " << volume << endl;

    return 0;

}