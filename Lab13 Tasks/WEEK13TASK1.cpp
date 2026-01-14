#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Value using pointer: " << *ptr;

    return 0;
}
