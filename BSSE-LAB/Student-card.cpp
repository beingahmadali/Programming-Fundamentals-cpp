

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    string studentName = "Ahmad";

    int sub1 = 85, sub2 = 72, sub3 = 90, sub4 = 68, sub5 = 54;
    const int MARKS_PER_SUB = 100;

    int totalObtained = sub1 + sub2 + sub3 + sub4 + sub5;
    int totalPossible = MARKS_PER_SUB * 5;

    double percentage = (static_cast<double>(totalObtained) / static_cast<double>(totalPossible)) * 100.0;

    bool status = (percentage >= 50.0);

    cout << fixed << setprecision(2);

    cout << "========================================\n";
    cout << "\tSTUDENT RESULT CARD\n";
    cout << "========================================\n";
    cout << "Student Name:\t" << studentName << "\n";
    cout << "----------------------------------------\n";
    cout << "Subject\t\tObtained\tTotal\n";
    cout << "----------------------------------------\n";
    cout << "Subject 1:\t" << sub1 << "\t\t" << MARKS_PER_SUB << "\n";
    cout << "Subject 2:\t" << sub2 << "\t\t" << MARKS_PER_SUB << "\n";
    cout << "Subject 3:\t" << sub3 << "\t\t" << MARKS_PER_SUB << "\n";
    cout << "Subject 4:\t" << sub4 << "\t\t" << MARKS_PER_SUB << "\n";
    cout << "Subject 5:\t" << sub5 << "\t\t" << MARKS_PER_SUB << "\n";
    cout << "----------------------------------------\n";
    cout << "Total Marks:\t" << totalObtained << " / " << totalPossible << "\n";
    cout << "Percentage:\t" << percentage << "%\n";
    cout << "Result Status:\t" << (status ? "PASS" : "FAIL") << "\n";

    return 0;
}