#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{

    const double TAX_RATE = 0.05; // 5% sales tax

    string item1 = "Apples";
    int quantity1 = 3;
    double price1 = 2.99;

    string item2 = "Bananas";
    int quantity2 = 2;
    double price2 = 1.99;

    string item3 = "Eggs";
    int quantity3 = 1;
    double price3 = 3.99;

    string item4 = "Cheese";
    int quantity4 = 1;
    double price4 = 5.99;

    double total1 = quantity1 * price1;
    double total2 = quantity2 * price2;
    double total3 = quantity3 * price3;
    double total4 = quantity4 * price4;

    double subtotal = total1 + total2 + total3 + total4;
    double tax = subtotal * TAX_RATE;
    double grandTotal = subtotal + tax;

    cout << fixed << setprecision(2);

    cout << "================================" << endl;
    cout << "         Grocery Store          " << endl;
    cout << "---------------------------------" << endl;

    cout << "Item\t\tQuantity\tPrice\tTotal" << endl;
    cout << "---------------------------------" << endl;

    cout << item1 << "\t\t" << quantity1 << "\t\t$" << price1 << "\t$" << total1 << endl;
    cout << item2 << "\t\t" << quantity2 << "\t\t$" << price2 << "\t$" << total2 << endl;
    cout << item3 << "\t\t" << quantity3 << "\t\t$" << price3 << "\t$" << total3 << endl;
    cout << item4 << "\t\t" << quantity4 << "\t\t$" << price4 << "\t$" << total4 << endl;

    cout << "---------------------------------" << endl;
    cout << "Subtotal:\t\t\t$" << subtotal << endl;
    cout << "Tax (5%):\t\t\t$" << tax << endl;
    cout << "Grand Total:\t\t\t$" << grandTotal << endl;
    cout << "=================================" << endl;

    return 0;
}