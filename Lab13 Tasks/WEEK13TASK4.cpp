#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;   // NULL instead of nullptr

    if(ptr == NULL)
    {
        cout << "Pointer is NULL. It does not point to any valid memory.";
    }
    else
    {
        cout << "Pointer address: " << ptr;
    }

    return 0;
}
