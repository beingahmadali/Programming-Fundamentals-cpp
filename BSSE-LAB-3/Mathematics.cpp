#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // (a) Simple Interest
    double P, R, T;
    cout << "Enter P, R, T: ";
    cin >> P >> R >> T;
    cout << "Simple interest = " << (P * R * T) / 100 << endl;

    // (b) Celsius from Fahrenheit
    double F;
    cout << "Enter temperature in F: ";
    cin >> F;
    float C = (F - 32) * 5 / 9;
    cout << "Temperature in C = " << C << endl;

    // (c) Distance between points
    double x1, y1, x2, y2;
    cout << "Enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;
    double dx = x2 - x1;
    double dy = y2 - y1;
    cout << "Distance = " << sqrt(dx * dx + dy * dy) << endl;

    // (d) Roots of Quadratic Equation
    double a, b, c;
    cout << "Enter a b c: ";
    cin >> a >> b >> c;
    double root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "Roots = " << root1 << " and " << root2 << endl;

    return 0;
}