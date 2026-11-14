#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    int patternsGenerated = 0;

    do {
        cout << "\n===== PATTERN GENERATOR =====" << endl;
        cout << "1. Right triangle 2. Pyramid 3. Hollow square 4. Grid 5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            int size;
            do {
                cout << "Size (1-15): ";
                cin >> size;
                if (size < 1 || size > 15) {
                    cout << "Invalid size! Must be between 1 and 15." << endl;
                }
            } while (size < 1 || size > 15);

            patternsGenerated++;

            switch (choice) {
                case 1: 
                    for (int i = 1; i <= size; i++) {
                        for (int j = 1; j <= i; j++) {
                            cout << "*";
                        }
                        cout << endl;
                    }
                    break;

                case 2: 
                    for (int i = 1; i <= size; i++) {
                        for (int s = 1; s <= size - i; s++) {
                            cout << " ";
                        }
                        for (int k = 1; k <= 2 * i - 1; k++) {
                            cout << "*";
                        }
                        cout << endl;
                    }
                    break;

                case 3: 
                    for (int r = 1; r <= size; r++) {
                        for (int c = 1; c <= size; c++) {
                            if (r == 1 || r == size || c == 1 || c == size) {
                                cout << "*";
                            } else {
                                cout << " ";
                            }
                        }
                        cout << endl;
                    }
                    break;

                case 4: 
                    for (int r = 1; r <= size; r++) {
                        for (int c = 1; c <= size; c++) {
                            cout << setw(4) << r * c;
                        }
                        cout << endl;
                    }
                    break;
            }
        } else if (choice == 5) {
            cout << "You generated " << patternsGenerated << " pattern(s). Goodbye!" << endl;
        } else {
            cout << "Invalid choice" << endl;
        }

    } while (choice != 5);

    return 0;
}