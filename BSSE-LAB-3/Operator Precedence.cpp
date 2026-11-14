#include <iostream>

using namespace std;

int main()
{
    int exp1 = 10 + 20 / 4 * 2;
    int exp2 = 17 % 5 * 3 + 1;
    int exp3 = (10 + 20) / (4 * 2);
    int exp4 = 50 - 10 - 5 * 2;
    int exp5 = 2 * 3 % 4;
    int exp6 = 8 / 2 * (2 + 2);
    bool exp7 = 5 > 3 && 2 > 4 || 1;
    int exp8 = !(3 == 3) + 5;

    cout << "The value of expression 1 is: " << exp1 << endl;
    cout << "The value of expression 2 is: " << exp2 << endl;
    cout << "The value of expression 3 is: " << exp3 << endl;
    cout << "The value of expression 4 is: " << exp4 << endl;
    cout << "The value of expression 5 is: " << exp5 << endl;
    cout << "The value of expression 6 is: " << exp6 << endl;
    cout << "The value of expression 7 is: " << exp7 << " (true)" << endl;
    cout << "The value of expression 8 is: " << exp8 << endl;

    return 0;
}