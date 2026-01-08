#include <iostream>
using namespace std;

int main() {
    int num, limit;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the limit of the table: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
