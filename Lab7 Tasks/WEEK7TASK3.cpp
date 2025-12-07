#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, role;

    // Input
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin") {
        if (password == "password123") {
            cout << "Authentication Successful!" << endl;

            cout << "Enter your role (Admin / Guest / User): ";
            cin >> role;

            if (role == "Admin") {
                cout << "Full Access" << endl;
            }
            else if (role == "Guest") {
                cout << "Limited Access" << endl;
            }
            else {
                cout << "No Access" << endl;
            }
        }
        else {
            cout << "Authentication Failed. Access Denied." << endl;
        }
    }
    else {
        cout << "Authentication Failed. Access Denied." << endl;
    }
	return 0;
}

