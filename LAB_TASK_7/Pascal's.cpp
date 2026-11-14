#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter number of rows (1-15): ";
        cin >> n;
        if (n < 1 || n > 15)
        {
            cout << "Invalid input! Please enter between 1 and 15." << endl;
        }
    } while (n < 1 || n > 15);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < (n - 1 - i) * 2; s++)
        {
            cout << " ";
        }

        long long C = 1;
        long long rowSum = 0;

        for (int k = 0; k <= i; k++)
        {
            cout << setw(4) << C;
            rowSum += C;
            // Formula to compute next coefficient: C(i, k+1) = C(i, k) * (i - k) / (k + 1)
            C = C * (i - k) / (k + 1);
        }

        cout << "   [Sum = " << rowSum << " = 2^" << i << "]" << endl;
    }

    return 0;
}