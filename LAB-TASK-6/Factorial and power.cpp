#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter n (0-20): ";
    cin >> n;

    while (n < 0 || n > 20)
    {
        cout << "Invalid! Enter n (0-20): ";
        cin >> n;
    }

    // Factorial and power.cpp

    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << n << "! = " << fact << endl;

    // for the power calculation
    double x;
    int e;
    cout << "Enter base and exponent: ";
    cin >> x >> e;

    double result = 1;
    for (int i = 1; i <= e; i++)
    {
        result *= x;
    }

    cout << x << "^" << e << " = " << result << " (pow gives " << pow(x, e) << ")" << endl;

    return 0;
}