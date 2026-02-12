#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

int main()
{
    void printArr(TVec);
    void stats(TVec a, float& mean, float& min, float& max, float& stdeviation);
    float mean, min, max, stdev;
    TVec a = {{1, 2, 3, 4, 5}};
    printArr(a); cout << endl;
    stats(a, mean, min, max, stdev);
    
    cout << "Mean: " << mean << endl; // 3
    cout << "Min: " << min << endl; // 1
    cout << "Max: " << max << endl; // 5
    cout << "Standart dev: " << stdev << endl; // 1.58114

return 0;
}

void printArr(TVec a)
{
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}

void stats(TVec a, float& mean, float& min, float& max, float& stdeviation)
{
    int sum = 0;
    for(int i=0; i<a.size();i++)
    {
        if( i=0)
        {
            max=a[i];
            min=a[i];
        }
        else if(a[i]>max)
        {
            max=a[i];
        }
        else if (a[i]<min)
        {
            min=a[i];
        }
        sum+=a[i];
    }
    stdeviation = 0;
    mean=(sum/N);
}
