#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp >= 40) {
        cout << " Stay indoors! It is extremely hot and could be dangerous to health.";
    }
    else if (temp >= 30 && temp <= 39) {
        cout << "Drink plenty of water. Weather is hot.";
    }
    else if (temp >= 20 && temp <= 29) {
        cout << "Weather is pleasant and suitable for outdoor activities.";
    }
    else {
        cout << "Weather is cold. Wear warm clothes.";
    }
    return 0;
}
