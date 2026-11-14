#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "How many terms (1-90)? ";
    cin >> n;

    // Validation loop
    while (n < 1 || n > 90)
    {
        cout << "Invalid! Enter terms between 1 and 90: ";
        cin >> n;
    }

    long long first = 0, second = 1;
    long long sum = 0;
    int evenCount = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";

        sum += first;
        if (first % 2 == 0)
        {
            evenCount++;
        }

        long long next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    cout << "Sum = " << sum << ", even terms = " << evenCount << endl;

    return 0;
}