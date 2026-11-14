#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter a b c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Not a quadratic equation" << endl;
        if (b != 0)
        {
            cout << "Linear root: " << -c / b << endl;
        }
    }
    else
    {
        double D = b * b - 4 * a * c;

        if (D > 0)
        {
            double root1 = (-b + sqrt(D)) / (2 * a);
            double root2 = (-b - sqrt(D)) / (2 * a);
            cout << "Two real roots: " << root1 << " and " << root2 << endl;
        }
        else if (D == 0)
        {
            double root = -b / (2 * a);
            cout << "One repeated root: " << root << endl;
        }
        else
        {
            double p = -b / (2 * a);
            double q = sqrt(-D) / (2 * a);
            cout << "Complex roots: " << p << " + " << q << "i and "
                 << p << " - " << q << "i" << endl;
        }
    }

    return 0;
}