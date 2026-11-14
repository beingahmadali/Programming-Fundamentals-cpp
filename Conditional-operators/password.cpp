#include <iostream>
#include <string>

using namespace std;

int main()
{
    string correct_user = "admin";
    string correct_pass = "air123";

    string username, password;

    cout << "Enter username: ";
    cin >> username;

    if (username != correct_user)
    {
        cout << "Unknown user" << endl;
    }
    else
    {
        cout << "Enter password: ";
        cin >> password;
        if (password.length() < 6)
        {
            cout << "Error: password must be at least 6 characters." << endl;
        }
        else if (password != correct_pass)
        {
            cout << "Incorrect password" << endl;
        }
        else
        {
            cout << "Welcome, admin!" << endl;
        }
    }

    return 0;
}