#include <iostream>
using namespace std;
bool is_leap(int year) {
    bool isLeap;
    if (year % 4 != 0)
        isLeap = false;
    else if (year % 100 != 0)
        isLeap = true;
    else if (year % 400 != 0)
        isLeap = false;
    else
        isLeap = true;
    return isLeap;
}

int main()
{
    int year;
    cout << "Enter the year for which you wish to generate the calendar: ";
    cin >> year;
    cout << is_leap(year);
    return 0;
}

