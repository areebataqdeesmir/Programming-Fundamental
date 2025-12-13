#include <iostream>
using namespace std;

int main() {
    int num;
    while (true) {
        cout << "Enter a positive number: ";
        cin >> num;
        if (num > 0) {
            cout << "Valid number: " << num << endl;
            break;
        } else {
            cout << "Error: Enter a positive number!" << endl;
        }
    }
    return 0;
}
