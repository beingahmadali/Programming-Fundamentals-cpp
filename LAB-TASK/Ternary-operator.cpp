#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter three integers (x y z): ";
    cin >> x >> y >> z;

    cout << "(a) Larger of x and y: " << ((x > y) ? x : y) << endl;

    cout << "(b) x is: " << ((x > 0) ? "Positive" : "Negative or (Non-Positive)") << endl;

    cout << "(c) Absolute value of y: " << ((y >= 0) ? y : -y) << endl;

    cout << "(d) Result for z: " << ((z >= 50) ? "Pass" : "Fail") << endl;

    cout << "(e) Points: " << z << ((z == 1) ? " point" : " points") << endl;

    cout << "(f) Largest of the three: " << ((x >= y) ? ((x >= z) ? x : z) : ((y >= z) ? y : z)) << endl;

    return 0;
}