#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter three side lengths: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "lengths must be positive." << endl;
    }
    else if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        cout << "Invalid: The sum of any two sides must be greater than the third side." << endl;
    }
    else
    {
        if (a == b && b == c)
        {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "The triangle is Isosceles." << endl;
        }
        else
        {
            cout << "The triangle is Scalene." << endl;
        }

        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            cout << "It is also a Right-angled triangle." << endl;
        }
        else
        {
            cout << "It is not a Right-angled triangle." << endl;
        }
    }

    return 0;
}