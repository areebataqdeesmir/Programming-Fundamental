#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Initialized array
    int n = 5;
    float sum = 0;

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    float average = sum / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}
