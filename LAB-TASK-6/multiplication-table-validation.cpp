#include <iostream>
using namespace std;

int main()
{
    int n, L;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter limit (1-20): ";
    cin >> L;

    while (L < 1 || L > 20)
    {
        cout << "Invalid! Enter limit (1-20): ";
        cin >> L;
    }

    for (int i = 1; i <= L; i++)
    {
        cout << n << " x " << i << " = " << n * i << " " << endl;
    }

    return 0;
}