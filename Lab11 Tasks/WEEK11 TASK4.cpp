#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 12, 8, 24, 3, 9};
    
    // Formula to find length
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "The length of the array is: " << length << endl;
    return 0;
}
