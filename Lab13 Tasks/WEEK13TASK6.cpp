#include <iostream>
using namespace std;

int main()
{
    int num = 10;        // integer variable
    int *ptr;            // pointer declaration

    ptr = &num;          // pointer stores address of num

    *ptr = 25;           // change value of num using pointer

    cout << "Modified value of num: " << num << endl;

    return 0;
}
