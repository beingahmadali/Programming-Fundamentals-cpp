#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sumEven = 0, sumOdd = 0, count35 = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }

        if (i % 3 == 0 && i % 5 == 0)
        {
            count35++;
        }
    }

    int totalSum = sumEven + sumOdd;
    int formula = N * (N + 1) / 2;

    cout << "Sum of even numbers : " << sumEven << endl;
    cout << "Sum of odd numbers : " << sumOdd << endl;
    cout << "Divisible by 3 and 5: " << count35 << endl;

    cout << "Check: " << sumEven << " + " << sumOdd << " = " << totalSum
         << " = " << N << "*" << (N + 1) << "/2 -> "
         << ((totalSum == formula) ? "correct" : "incorrect") << endl; // Check if the sum of even and odd numbers equals the formula N*(N+1)/2

    return 0;
}