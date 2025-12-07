#include <iostream>
using namespace std;

int main()
 {
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a ;
    cout << "Enter second number: ";
    cin >> b ;
    cout << "Enter third number: ";
    cin >> c ;
    if (a >= b && a >= c)
	 {
        cout << "The largest number is: " << a << endl;
    }
    if (b >= a && b >= c)
	 {
        cout << "The largest number is: " << b << endl;
    }
    if (c >= a && c >= b) 
	{
        cout << "The largest number is: " << c << endl;
    }
    return 0;
}
