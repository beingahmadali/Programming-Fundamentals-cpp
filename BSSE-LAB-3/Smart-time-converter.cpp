#include <iostream>
using namespace std;

int main()
{
    int sec;
    cout << "Enter time in seconds: ";
    cin >> sec;

    // Use floating-point division
    double hr = sec / 3600.0;
    double min = sec / 60.0;

    cout << "Total hours: " << hr << endl;
    cout << "Total minutes: " << min << endl;
    cout << "Exact seconds: " << sec << endl;

    return 0;
}