
#include <iostream>

using namespace std;

int main()
{
    int units;
    cout << "Enter consumed units: ";
    cin >> units;

    if (units < 0)
    {
        cout << "Invalid: Units cannot be negative." << endl;
        return 1;
    }

    double bill = 0.0;

    if (units <= 100)
    {
        bill = units * 10.0;
    }
    else if (units <= 200)
    {
        bill = (100 * 10.0) + (units - 100) * 15.0;
    }
    else if (units <= 300)
    {
        bill = (100 * 10.0) + (100 * 15.0) + (units - 200) * 20.0;
    }
    else
    {
        bill = (100 * 10.0) + (100 * 15.0) + (100 * 20.0) + (units - 300) * 25.0;
    }

    if (bill > 5000.0)
    {
        bill += bill * 0.05;
    }

    cout << "Total electricity bill: Rs. " << bill << endl;

    return 0;
}