#include <iostream>
using namespace std;

int main() {
    int age;
    int income;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Enter your annual income: ";
        cin >> income;

        if (income >= 30000) {
            cout << "Congratulations! You are eligible for a loan." << endl;
        }
        else {
            cout << "You meet the age requirement but are NOT eligible "
                 << "for a loan because your income is below $30,000." << endl;
        }
    }
    else {
        cout << "You are NOT eligible for a loan because you are under 18 years of age." << endl;
    }
    return 0;
}
