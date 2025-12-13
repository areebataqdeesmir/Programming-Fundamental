#include <iostream>
using namespace std;

int main() {
    float balance = 1000;  // default balance
    int choice;
    float amount;

    while (true) {
        // Display menu
        cout << "\n--- Banking System Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Deposit Money
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount deposited successfully. New balance: $" << balance << endl;
        }
        else if (choice == 2) {
            // Withdraw Money
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance -= amount;
                cout << "Amount withdrawn successfully. Remaining balance: $" << balance << endl;
            }
        }
        else if (choice == 3) {
            // Check Balance
            cout << "Current balance: $" << balance << endl;
        }
        else if (choice == 4) {
            // Exit
            cout << "Exiting program. Thank you!" << endl;
            break;
        }
        else {
            // Invalid choice
            cout << "Invalid menu choice! Try again." << endl;
        }
    }
    return 0;
}

