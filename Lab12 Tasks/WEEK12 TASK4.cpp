#include <iostream>
using namespace std;

// Function for Addition
float add(float a, float b)
{
    return a + b;
}

// Function for Subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for Multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for Division
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice;
    float num1, num2;
    char again;

    do
    {
        cout << "\n----- Simple Calculator -----";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch(choice)
        {
            case 1:
                cout << "Result = " << add(num1, num2);
                break;

            case 2:
                cout << "Result = " << subtract(num1, num2);
                break;

            case 3:
                cout << "Result = " << multiply(num1, num2);
                break;

            case 4:
                if(num2 != 0)
                    cout << "Result = " << divide(num1, num2);
                else
                    cout << "Division by zero is not allowed!";
                break;

            case 5:
                cout << "Exiting program...";
                return 0;

            default:
                cout << "Invalid choice!";
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    return 0;
}
