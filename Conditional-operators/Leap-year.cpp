#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // (a) Implementation using one compound condition
    cout << "\n--- (a) Compound Condition ---" << endl;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    // (b) Implementation using nested if-else statements only.
    cout << "--- (b) Nested If-Else ---" << endl;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year." << endl;
            }
            else
            {
                cout << year << " is not a leap year." << endl;
            }
        }
        else
        {
            cout << year << " is a leap year." << endl;
        }
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
