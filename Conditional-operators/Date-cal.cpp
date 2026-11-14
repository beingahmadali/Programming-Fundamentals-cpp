#include <iostream>

using namespace std;

int main()
{
    int day, month, year;

    cout << "Enter day, month, year: ";
    cin >> day >> month >> year;

    if (month < 1 || month > 12 || day < 1 || year < 1)
    {
        cout << "invalid date" << endl;
        return 0;
    }

    // 2. Leap Year Check
    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    int maxDays;
    if (month == 2)
    {
        maxDays = isLeap ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        maxDays = 30;
    }
    else
    {
        maxDays = 31;
    }

    if (day > maxDays)
    {
        cout << "invalid date" << endl;
        return 0;
    }

    day++;
    if (day > maxDays)
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }

    cout << "Next date: " << day << " " << month << " " << year << endl;

    return 0;
}