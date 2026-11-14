#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;
    int count = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }
        sum += i;
        count++;
    }

    cout << "Sum of numbers not divisible by 3 or 5: " << sum
         << " (" << count << " numbers)" << endl;

    int A, B;
    cout << "Enter range A B: ";
    cin >> A >> B;

    int primeCount = 0;
    cout << "Primes: ";

    for (int i = A; i <= B; i++)
    {
        if (i < 2)
            continue;

        bool isPrime = true;
        for (int d = 2; d * d <= i; d++)
        {
            if (i % d == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
            primeCount++;
        }
    }
    cout << "(" << primeCount << " primes)" << endl;

    int startN;
    cout << "Enter N: ";
    cin >> startN;

    int current = startN + 1;
    while (true)
    {
        if (current < 2)
        {
            current++;
            continue;
        }

        bool isPrime = true;
        for (int d = 2; d * d <= current; d++)
        {
            if (current % d == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << "Next prime after " << startN << ": " << current << endl;
            break;
        }
        current++;
    }

    return 0;
}