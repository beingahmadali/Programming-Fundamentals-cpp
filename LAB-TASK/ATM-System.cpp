#include <iostream>
using namespace std;

int main()
{
    int balance = 50000;
    int choice, amount;

    cout << "===== ATM MENU =====" << endl;
    cout << "1. Check balance 2. Deposit 3. Withdraw 4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Current balance: Rs. " << balance << endl;
        break;

    case 2:
        cout << "Enter deposit amount: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Error: Deposit amount must be positive!" << endl;
        }
        else
        {
            balance += amount;
            cout << "Deposit successful." << endl;
            cout << "Updated balance: Rs. " << balance << endl;
        }
        break;

    case 3:
        cout << "Enter amount: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Error: Withdrawal amount must be positive!" << endl;
        }
        else if (amount % 500 != 0)
        {
            cout << "Error: Withdrawal amount must be a multiple of 500!" << endl;
        }
        else if (amount > 25000)
        {
            cout << "Error: Daily withdrawal limit is Rs. 25,000!" << endl;
        }
        else if (amount > balance)
        {
            cout << "Error: Insufficient balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Please collect your cash." << endl;
            cout << "Remaining balance: Rs. " << balance << endl;
        }
        break;

    case 4:
        cout << "Thank you for using the ATM." << endl;
        break;

    default:
        cout << "Invalid choice! Please select between 1 and 4." << endl;
        break;
    }

    return 0;
}