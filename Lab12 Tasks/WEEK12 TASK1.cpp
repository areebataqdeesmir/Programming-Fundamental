#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "\nSquare Root: " << sqrt(num);
    cout << "\nAbsolute Value: " << fabs(num);
    cout << "\nSin: " << sin(num);
    cout << "\nCos: " << cos(num);
    cout << "\nPower of 3: " << pow(num, 3);

    return 0;
}
