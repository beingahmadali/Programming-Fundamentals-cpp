#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int celsius1 = 25;
    int celsius2 = 35;
    int celsius3 = 45;

    // formula: F = (celsius * 9.0 / 5.0) + 32.0;

    double fahrenheit1 = (celsius1 * 9.0 / 5.0) + 32.0;
    double fahrenheit2 = (celsius2 * 9.0 / 5.0) + 32.0;
    double fahrenheit3 = (celsius3 * 9.0 / 5.0) + 32.0;

    cout << fixed << setprecision(1);

    cout << "========================================\n";
    cout << "\tTEMPERATURE CONVERSION\n";
    cout << "========================================\n";
    cout << "Celsius\t\tFahrenheit\n";
    cout << "----------------------------------------\n";
    cout << celsius1 << "\t\t" << fahrenheit1 << "\n";
    cout << celsius2 << "\t\t" << fahrenheit2 << "\n";
    cout << celsius3 << "\t\t" << fahrenheit3 << "\n";
    cout << "----------------------------------------\n";
    return 0;
}