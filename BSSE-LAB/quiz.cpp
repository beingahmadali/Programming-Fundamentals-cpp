#include <iostream>
using namespace std;
int main()
{

    float a, b, c, d, e;

    cout << "Enter temperature in C: ";

    cin >> a >> b >> c >> d >> e;

    if (a > 37)
    {
        cout << "You are ill" << endl;
    }

    else if (b > 37)
    {
        cout << "You are ill" << endl;
    }
    else if (c > 37)
    {
        cout << "You are ill" << endl;
    }
    else if (d > 37)
    {
        cout << "You are ill" << endl;
    }
    else if (e > 37)
    {
        cout << "You are ill" << endl;
    }

    else
    {
        cout << "Healthy";
    }

    return 0;
}