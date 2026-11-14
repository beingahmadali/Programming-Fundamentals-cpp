#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter number of rows n (1-10): ";
        cin >> n;
        if (n < 1 || n > 10)
        {
            cout << "Invalid input! Please enter a value between 1 and 10." << endl;
        }
    } while (n < 1 || n > 10);

    cout << "\n(a) Diamond Pattern:" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * (n - i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n(b) Hollow Pyramid Pattern:" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}