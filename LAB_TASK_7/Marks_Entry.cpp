#include <iostream>
using namespace std;

int main()
{
    int mark;
    int count = 0;
    int total = 0;
    int highest = -1;
    char again;

    do
    {
        count++;

        do
        {
            cout << "Enter marks for subject " << count << ": ";
            cin >> mark;

            if (mark < 0 || mark > 100)
            {
                cout << "Invalid marks, try again." << endl;
            }
        } while (mark < 0 || mark > 100);

        total += mark;
        if (mark > highest)
        {
            highest = mark;
        }

        do
        {
            cout << "Add another subject? (y/n): ";
            cin >> again;
        } while (again != 'y' && again != 'Y' && again != 'n' && again != 'N');

    } while (again == 'y' || again == 'Y');

    double average = (double)total / count;

    cout << "Subjects: " << count
         << " Total: " << total
         << " Average: " << average << endl;
    cout << "Highest: " << highest << endl;

    return 0;
}