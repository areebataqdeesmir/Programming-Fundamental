#include <iostream>
using namespace std;

int main() 
{
    double balance, withdrawal;
    cout << "Enter your account balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;
    if (withdrawal <= balance)
	 {
    balance = balance - withdrawal;
    cout << "Remaining balance: " << balance << endl;
    }
    else 
	 {
    cout << "Insufficient balance." << endl;
    }
    return 0;
}

