#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;

    // Extract digits and calculate sum

    int d1 = num / 10000;       // first digit
    int d2 = (num / 1000) % 10; // second digit
    int d3 = (num / 100) % 10;  // third digit
    int d4 = (num / 10) % 10;   // fourth digit
    int d5 = num % 10;          // fifth digit

    int sum = d1 + d2 + d3 + d4 + d5;
    cout << "Sum of digits: " << sum << endl;

    // Reverse the number
    int reversed_num = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    cout << "Reversed number: " << reversed_num << endl;

    // Digits:
    cout << "Digits: " << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << endl;

    return 0;
}