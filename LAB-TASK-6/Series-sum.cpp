#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    double harmonicSum = 0.0;
    int sumSquares = 0;
    int altSeries = 0;

    for (int i = 1; i <= n; i++)
    {
        harmonicSum += 1.0 / i;
        sumSquares += i * i;
        altSeries += (i % 2 == 1) ? i : -i;
    }

    int formulaSquares = n * (n + 1) * (2 * n + 1) / 6;

    cout << "Harmonic sum = " << harmonicSum << endl;
    cout << "Sum of squares = " << sumSquares << " (formula: " << formulaSquares << ")" << endl;
    cout << "Alternating series = " << altSeries << endl;

    return 0;
}