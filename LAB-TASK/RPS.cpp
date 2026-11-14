#include <iostream>
using namespace std;

int main()
{
    char p1, p2;

    cout << "Player 1 (R/P/S): ";
    cin >> p1;

    cout << "Player 2 (R/P/S): ";
    cin >> p2;

    switch (p1)
    {
    case 'r':
    case 'R':
        switch (p2)
        {
        case 'r':
        case 'R':
            cout << "It's a draw" << endl;
            break;
        case 'p':
        case 'P':
            cout << "Paper covers Rock. Player 2 wins!" << endl;
            break;
        case 's':
        case 'S':
            cout << "Rock crushes Scissors. Player 1 wins!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
        break;

    case 'p':
    case 'P':
        switch (p2)
        {
        case 'r':
        case 'R':
            cout << "Paper covers Rock. Player 1 wins!" << endl;
            break;
        case 'p':
        case 'P':
            cout << "It's a draw" << endl;
            break;
        case 's':
        case 'S':
            cout << "Scissors cut Paper. Player 2 wins!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
        break;

    case 's':
    case 'S':
        switch (p2)
        {
        case 'r':
        case 'R':
            cout << "Rock crushes Scissors. Player 2 wins!" << endl;
            break;
        case 'p':
        case 'P':
            cout << "Scissors cut Paper. Player 1 wins!" << endl;
            break;
        case 's':
        case 'S':
            cout << "It's a draw" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}