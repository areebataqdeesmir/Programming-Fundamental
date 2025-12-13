#include <iostream>
using namespace std;

int main() {
    int choice;
    float amount, convertedAmount;
    
    // Exchange rates (example rates)
    const float PKR_RATE = 280.0;
    const float INR_RATE = 83.0;
    const float EURO_RATE = 0.93;
    
    cout << "Currency Converter (USD to other currencies)\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to Euro\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;
    
    cout << "Enter amount in USD: ";
    cin >> amount;
    
    switch(choice) {
        case 1:
            convertedAmount = amount * PKR_RATE;
            cout << amount << " USD = " << convertedAmount << " PKR\n";
            break;
        case 2:
            convertedAmount = amount * INR_RATE;
            cout << amount << " USD = " << convertedAmount << " INR\n";
            break;
        case 3:
            convertedAmount = amount * EURO_RATE;
            cout << amount << " USD = " << convertedAmount << " Euros\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}

