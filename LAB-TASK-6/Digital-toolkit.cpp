#include <iostream>
using namespace std;

int main()
{
    long long num;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Validation loop
    while (num <= 0)
    {
        cout << "Invalid! Enter a positive integer: ";
        cin >> num;
    }

    long long temp = num;
    int digitCount = 0;
    int digitSum = 0;
    long long nonZeroProduct = 1;
    int maxDigit = 0;
    long long reversedNum = 0;

    // Process digits using a single while loop
    while (temp > 0)
    {
        int digit = temp % 10;

        digitCount++;
        digitSum += digit;

        if (digit != 0)
        {
            nonZeroProduct *= digit;
        }

        if (digit > maxDigit)
        {
            maxDigit = digit;
        }

        reversedNum = reversedNum * 10 + digit;

        temp /= 10;
    }

    cout << "Digits: " << digitCount
         << " Sum: " << digitSum
         << " Product (non-zero): " << nonZeroProduct
         << " Largest digit: " << maxDigit << endl;

    cout << "Reversed: " << reversedNum << endl;

    if (num == reversedNum)
    {
        cout << num << " is a palindrome." << endl;
    }
    else
    {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}