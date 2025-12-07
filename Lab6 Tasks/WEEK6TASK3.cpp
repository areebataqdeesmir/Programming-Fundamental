#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "12345") {
        cout << "Access Granted.";
    }
    else if (username == "admin" && password != "12345") {
        cout << "Wrong Password.";
    }
    else {
        cout << "User Not Found.";
    }
    return 0;
}
