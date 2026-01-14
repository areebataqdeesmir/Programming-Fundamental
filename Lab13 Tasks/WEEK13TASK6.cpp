#include <iostream>
using namespace std;

int main()
{
    int num = 25;

    void *ptr;
    ptr = &num;

    int *p;        // create integer pointer
    p = (int*)ptr; // cast void pointer to int pointer

    cout << "Value using void pointer: " << *p;

    return 0;
}
