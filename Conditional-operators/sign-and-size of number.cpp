#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    if (a > 0)
    {
        cout << a << " is positive." << endl;

        // Nested if-else for size check
        if (a >= -100 && a <= 100)
        {
            cout << "It is a small number." << endl;
        }
        else
        {
            cout << "It is a large number." << endl;
        }
    }
    else if (a < 0)
    {
        cout << a << " is negative." << endl;

        // Nested if-else for size check
        if (a >= -100 && a <= 100)
        {
            cout << "It is a small number." << endl;
        }
        else
        {
            cout << "It is a large number." << endl;
        }
    }
    else
    {
        cout << "The number is zero." << endl;
    }

    return 0;
}