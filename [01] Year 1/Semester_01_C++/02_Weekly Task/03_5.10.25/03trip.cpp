// 03.trip.cpp
// Marcos Torres 1.10.25

#include <iostream>
using namespace std;

int main(){

    float dist, avspeed, ttotal, startt, arrivet;
    int starth, startmins, arrivh, arrivmins;

    cout << " distance (km): "; cin >> dist ;
    cout << " average velocity (km/h): "; cin >> avspeed ;
    cout << " leaving hour : "; cin >> starth ;
    cout << " leaving mins : "; cin >> startmins ;

    ttotal = dist / avspeed;
    startt = starth * 60 + startmins ; // mins
    arrivet = startt + ttotal * 60; // mins

    arrivmins = (int) arrivet % 60;
    arrivh = arrivet /60;

    cout << " Total estimated elapsed time ( hours ): "<< ttotal << endl ;
    cout << " Estimated time of arrival : " << arrivh << ":" << arrivmins <<
    endl ;

    return 0;
}
