#include <iostream>
using namespace std;
int main()
{

    // declare the variable and take input from user
    int amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    // now declare the variable to store the number of notes of each denomination
    int note_5000 = amount / 5000;
    amount %= 5000;
    cout << "Rs. 5000 note: " << note_5000 << endl;

    int note_1000 = amount / 1000;
    amount %= 1000;
    cout << "Rs. 1000 note: " << note_1000 << endl;

    int note_500 = amount / 500;
    amount %= 500;
    cout << "Rs. 500 note: " << note_500 << endl;

    int note_100 = amount / 100;
    amount %= 100;
    cout << "Rs. 100 note: " << note_100 << endl;

    int note_50 = amount / 50;
    amount %= 50;
    cout << "Rs. 50 note: " << note_50 << endl;

    int note_10 = amount / 10;
    amount %= 10;
    cout << "Rs. 10 note: " << note_10 << endl;

    return 0;
}