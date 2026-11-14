#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;


    do {
        cout << "Enter N (1-12): ";
        cin >> N;
    } while (N < 1 || N > 12);

    cout << "    ";
    for (int j = 1; j <= N; j++) {
        cout << setw(5) << j;
    }
    cout << endl;

    int innerCount = 0;

    for (int i = 1; i <= N; i++) {
        cout << setw(3) << i << "|"; 

        for (int j = 1; j <= N; j++) {
            innerCount++;

            if (i == j) {
                cout << " [" << setw(2) << i * j << "]";
            } else {
                cout << setw(5) << i * j;
            }
        }
        cout << endl;
    }

    cout << "Inner loop body executed " << innerCount << " times." << endl;

    return 0;
}