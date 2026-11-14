#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    // Fixed deposit interest rate
    const float RATE = 0.065;

    // Deposit amount

    double principal = 15000.00;
    int years = 5;

    // Simple interest formula: Interest = Principal * Rate * Time
    double interest = principal * RATE * static_cast<double>(years);

    // Maturity amount = Principal + Interest
    double maturityAmount = principal + interest;

    cout << fixed << setprecision(2);

    cout << "===============================" << endl;

    cout << "\tBank Term Deposit \n"
         << endl;

    cout << "===============================" << endl;

    cout << "Principal Amount: \t$" << principal << endl;
    cout << "Annual Rate: \t\t" << RATE * 100 << "%" << endl;
    cout << "Time (Years): \t\t" << years << endl;
    cout << "-------------------------------" << endl;
    cout << "Interest-Earned: \t\t$" << interest << endl;
    cout << "Maturity Amount: \t$" << maturityAmount << endl;

    return 0;
}