#include <iostream>
using namespace std;

int main() {
    int number, limit;
    int i = 1;

    // Take input from user
    cout << "Enter the number for multiplication table: ";
    cin >> number;

    cout << "Enter how many multiples you want to show: ";
    cin >> limit;

    // While loop to display table
    while (i <= limit) {
        cout << number << " x " << i << " = " << number * i << endl;
        i++;
    }
    return 0;
}
