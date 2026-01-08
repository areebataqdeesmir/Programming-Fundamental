#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0]; // Start with the first number

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; // Update largest if a bigger number is found
        }
    }

    cout << "The largest number is: " << largest << endl;
    return 0;
}
