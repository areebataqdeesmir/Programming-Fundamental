#include <iostream>
using namespace std;

int main() {
    int salary, experience;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your years of experience: ";
    cin >> experience;

    if (salary >= 25000) {
        cout << "You are eligible for the loan.";
    }
    else if (salary >= 20000 && experience > 5) {
        cout << "You are eligible for the loan.";
    }
    else {
        cout << "You are NOT eligible for the loan.";
    }
    return 0;
}
