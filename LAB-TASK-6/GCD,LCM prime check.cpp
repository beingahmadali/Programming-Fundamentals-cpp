#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int a = num1;
    int b = num2;
    int gcdIterations = 0;

    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
        gcdIterations++;
    }

    int gcd = a;
    long long lcm = ((long long)num1 * num2) / gcd;

    cout << "GCD = " << gcd << ", LCM = " << lcm << " (" << gcdIterations << " iterations)" << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = (n > 1);
    int primeIterations = 0;

    for (int i = 2; i * i <= n && isPrime; i++)
    {
        primeIterations++;
        if (n % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
    {
        cout << n << " is prime (" << primeIterations << " divisors tested)" << endl;
    }
    else
    {
        cout << n << " is not prime (" << primeIterations << " divisors tested)" << endl;
    }

    return 0;
}