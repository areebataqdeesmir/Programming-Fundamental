#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reverse order: ";
    for(int i = n - 1; i >= 0; i--) { // Start from the last index
        cout << arr[i] << " ";
    }
    return 0;
}

