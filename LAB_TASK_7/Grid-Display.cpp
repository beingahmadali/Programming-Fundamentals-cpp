#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter size n (2-15): ";
        cin >> n;
    } while (n < 2 || n > 15);

    cout << "\n(a) Chessboard" << endl;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            if ((r + c) % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }

    cout << "\n(b) X pattern" << endl;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            if (r == c || r + c == n + 1)
            {
                cout << "X";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }

    cout << "\n(c) Coordinate grid" << endl;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            cout << "(" << r << "," << c << ") ";
        }
        cout << endl;
    }

    return 0;
}