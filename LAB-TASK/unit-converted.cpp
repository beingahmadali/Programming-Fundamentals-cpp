#include <iostream>
using namespace std;

int main()
{
    int category, choice;
    double val, result;

    cout << "1. Length 2. Weight 3. Temperature" << endl;
    cout << "Choose a category: ";
    cin >> category;

    switch (category)
    {
    case 1:
        cout << "1. km -> miles 2. miles -> km" << endl;
        cout << "Choose a conversion: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter km: ";
            cin >> val;
            if (val < 0)
            {
                cout << "Error: Length cannot be negative!" << endl;
            }
            else
            {
                result = val * 0.621371;
                cout << "= " << result << " miles" << endl;
            }
            break;

        case 2:
            cout << "Enter miles: ";
            cin >> val;
            if (val < 0)
            {
                cout << "Error: Length cannot be negative!" << endl;
            }
            else
            {
                result = val / 0.621371;
                cout << "= " << result << " km" << endl;
            }
            break;

        default:
            cout << "Invalid conversion choice!" << endl;
            break;
        }
        break;

    case 2:
        cout << "1. kg -> lb 2. lb -> kg" << endl;
        cout << "Choose a conversion: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter kg: ";
            cin >> val;
            if (val < 0)
            {
                cout << "Error: Weight cannot be negative!" << endl;
            }
            else
            {
                result = val * 2.20462;
                cout << "= " << result << " lb" << endl;
            }
            break;

        case 2:
            cout << "Enter lb: ";
            cin >> val;
            if (val < 0)
            {
                cout << "Error: Weight cannot be negative!" << endl;
            }
            else
            {
                result = val / 2.20462;
                cout << "= " << result << " kg" << endl;
            }
            break;

        default:
            cout << "Invalid conversion choice!" << endl;
            break;
        }
        break;

    case 3:
        cout << "1. C -> F 2. F -> C" << endl;
        cout << "Choose a conversion: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter C: ";
            cin >> val;
            result = (val * 9.0 / 5.0) + 32;
            cout << "= " << result << " F" << endl;
            break;

        case 2:
            cout << "Enter F: ";
            cin >> val;
            result = (val - 32) * 5.0 / 9.0;
            cout << "= " << result << " C" << endl;
            break;

        default:
            cout << "Invalid conversion choice!" << endl;
            break;
        }
        break;

    default:
        cout << "Invalid category choice!" << endl;
        break;
    }

    return 0;
}