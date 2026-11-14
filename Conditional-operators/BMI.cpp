#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double weight, height;

    cout << "Enter weight (in kg): ";
    cin >> weight;

    if (cin.fail() || weight < 1.0 || weight > 500.0)
    {
        cout << "Error: Invalid weight! Must be a number between 1 and 500 kg." << endl;
        return 1;
    }

    // 2. Height Input & Validation
    cout << "Enter height (in meters): ";
    cin >> height;

    if (cin.fail() || height < 0.3 || height > 2.5)
    {
        cout << "Error: Invalid height! Must be a number between 0.3 and 2.5 m." << endl;
        return 1; // returning 1 to indicate an error occurred and terminate the program
    }

    double bmi = weight / (height * height);

    cout << fixed << setprecision(2);
    cout << "\nCalculated BMI: " << bmi << endl;

    // Category Determination based on BMI value:
    if (bmi < 18.5)
    {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi < 25.0)
    {
        cout << "Category: Normal" << endl;
    }
    else if (bmi < 30.0)
    {
        cout << "Category: Overweight" << endl;
    }
    else
    {
        cout << "Category: Obese" << endl;
    }

    return 0;
}