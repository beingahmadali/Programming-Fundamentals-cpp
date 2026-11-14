#include <iostream>
using namespace std;

int main()
{
    int mark;
    int count = 0;
    int sum = 0;
    int highest = -1;
    int lowest = 101;
    int passed = 0;

    cout << "Enter marks (-1 to stop): ";
    cin >> mark;

    while (mark != -1)
    {
        if (mark < 0 || mark > 100)
        {
            cout << "Ignored invalid mark: " << mark << endl;
        }
        else
        {
            count++;
            sum += mark;

            if (mark > highest)
            {
                highest = mark;
            }
            if (mark < lowest)
            {
                lowest = mark;
            }
            if (mark >= 50)
            {
                passed++;
            }
        }
        cin >> mark;
    }

    if (count == 0)
    {
        cout << "No valid marks were entered." << endl;
    }
    else
    {
        double average = (double)sum / count;
        cout << "Students: " << count << " Average: " << average << endl;
        cout << "Highest: " << highest << " Lowest: " << lowest << " Passed: " << passed << endl;
    }

    return 0;
}