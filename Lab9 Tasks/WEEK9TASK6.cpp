#include <iostream>
using namespace std;
int main() 
{
    string password;
    string correctPassword = "10987";
    do
    {
        cout << "Enter password: ";
        cin >> password;
        if (password != correctPassword)
        {
            cout << "Wrong password. Try again.\n";
        }
    } 
	while (password != correctPassword);
    cout << "Password matched. Access granted!";
    return 0;
}
