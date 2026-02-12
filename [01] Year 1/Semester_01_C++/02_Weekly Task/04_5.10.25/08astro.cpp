// 08astro.cpp
// Marcos Torres 05.10.2025
#include <iostream>
#include <string>
using namespace std;

int main() {
    int day;
    string month, sign;

    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth [Not case sensitive] (e.g., March, July, etc.): ";
    cin >> month;

    for (auto &c : month) c = tolower(c);

    if ((month == "march" && day >= 21) || (month == "april" && day <= 19))
        sign = "Aries";
    else if ((month == "april" && day >= 20) || (month == "may" && day <= 20))
        sign = "Taurus";
    else if ((month == "may" && day >= 21) || (month == "june" && day <= 20))
        sign = "Gemini";
    else if ((month == "june" && day >= 21) || (month == "july" && day <= 22))
        sign = "Cancer";
    else if ((month == "july" && day >= 23) || (month == "august" && day <= 22))
        sign = "Leo";
    else if ((month == "august" && day >= 23) || (month == "september" && day <= 22))
        sign = "Virgo";
    else if ((month == "september" && day >= 23) || (month == "october" && day <= 22))
        sign = "Libra";
    else if ((month == "october" && day >= 23) || (month == "november" && day <= 21))
        sign = "Scorpio";
    else if ((month == "november" && day >= 22) || (month == "december" && day <= 21))
        sign = "Sagittarius";
    else if ((month == "december" && day >= 22) || (month == "january" && day <= 19))
        sign = "Capricorn";
    else if ((month == "january" && day >= 20) || (month == "february" && day <= 18))
        sign = "Aquarius";
    else if ((month == "february" && day >= 19) || (month == "march" && day <= 20))
        sign = "Pisces";
    else
        sign = "Invalid date";

    cout << "Your Astrological sign is: " << sign << endl;

    return 0;
}
