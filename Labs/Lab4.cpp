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
int number_of_days_in_a_month(int a_month) {
    if (a_month == 1 || a_month == 3 || a_month == 5 || a_month == 7 || a_month == 8 || a_month == 10 || a_month == 12)
        return 31;
    else
        return 30;
}
int main()
{
    int year;
    int firstDay;
    string weekdays[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
    const int WEEKS = 5;
    const int DAYS_PER_WEEK = 7;

    int arr[WEEKS][DAYS_PER_WEEK];
    int day_of_month = 1;

    //jan 2004 starting from sun
    for (int i = 0; i < WEEKS; i++) {
        for (int j = 0; j < DAYS_PER_WEEK; j++) {
            if (day_of_month == number_of_days_in_a_month(1))
                break;
            arr[i][j] = day_of_month++;
        }
    }

    for (int i = 0; i < WEEKS; i++) {
        for (int j = 0; j < DAYS_PER_WEEK; j++) {
            if (day_of_month == number_of_days_in_a_month(1))
                break;
            cout << arr[i][j] << " ";
        }
    }


    //cout << "Enter the year for which you wish to generate the calendar: ";
    //cin >> year;

    //cout << endl << "Enter the day of the week that January first is on: ";
    //cin >> firstDay;

    return 0;
}

