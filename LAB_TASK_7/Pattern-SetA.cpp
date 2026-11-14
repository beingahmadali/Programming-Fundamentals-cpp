#include <iostream>
#include <iomanip>
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

    cout << "\n(a) Inverted Triangle:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n(b) Floyd's Triangle:" << endl;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(3) << count++;
        }
        cout << endl;
    }

    cout << "\n(c) Repeated Digits:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}