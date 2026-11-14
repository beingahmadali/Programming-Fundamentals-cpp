
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int age, semester;
    char prog, confirm;
    bool ok;

    do 
    {
        cout << "Enter age (16-60): ";
        cin >> age;
        ok = true;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please type a whole number." << endl;
            ok = false;
        }
        else if (age < 16 || age > 60)
        {
            cout << "Age must be between 16 and 60." << endl;
            ok = false;
        }
    } while (!ok);

    do
    {
        cout << "Enter semester (1-8): ";
        cin >> semester;
        if (semester < 1 || semester > 8)
        {
            cout << "Semester must be between 1 and 8." << endl;
        }
    } while (semester < 1 || semester > 8);

    do
    {
        cout << "Programme (A/S/D): ";
        cin >> prog;
    } while (prog != 'A' && prog != 'a' && prog != 'S' && prog != 's' && prog != 'D' && prog != 'd');

    do
    {
        cout << "Confirm registration? (y/n): ";
        cin >> confirm;
    } while (confirm != 'y' && confirm != 'Y' && confirm != 'n' && confirm != 'N');

    if (confirm == 'y' || confirm == 'Y')
    {
        cout << "Registered: age " << age << ", semester " << semester << ", ";
        switch (prog)
        {
        case 'A':
        case 'a':
            cout << "Artificial Intelligence" << endl;
            break;
        case 'S':
        case 's':
            cout << "Software Engineering" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Data Science" << endl;
            break;
        }
    }
    else
    {
        cout << "Registration cancelled." << endl;
    }

    return 0;
}