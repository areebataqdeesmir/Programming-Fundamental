#include <iostream>
using namespace std;

// Function to display menu
void showMenu()
{
    cout << "\n----- Restaurant Menu -----";
    cout << "\n1. Burger      Rs. 250";
    cout << "\n2. Pizza       Rs. 500";
    cout << "\n3. Sandwich    Rs. 200";
    cout << "\n4. Fries       Rs. 150";
    cout << "\n5. Soft Drink  Rs. 100";
    cout << "\n6. Exit";
}

// Function to calculate cost of selected item
float itemCost(float price, int quantity)
{
    return price * quantity;
}

// Function to calculate final bill with 10% tax
float finalBill(float total)
{
    float tax = total * 0.10;
    return total + tax;
}

int main()
{
    int choice, quantity;
    float price, total = 0;

    do
    {
        showMenu();
        cout << "\n\nEnter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 5)
        {
            cout << "Enter quantity: ";
            cin >> quantity;

            switch(choice)
            {
                case 1: price = 250; break;
                case 2: price = 500; break;
                case 3: price = 200; break;
                case 4: price = 150; break;
                case 5: price = 100; break;
            }

            total = total + itemCost(price, quantity);
            cout << "Item added to cart!";
        }

    } while(choice != 6);

    cout << "\n\nTotal without tax: Rs. " << total;
    cout << "\nService Tax (10%): Rs. " << total * 0.10;
    cout << "\nFinal Bill: Rs. " << finalBill(total);

    return 0;
}
