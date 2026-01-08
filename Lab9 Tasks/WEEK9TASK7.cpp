#include <iostream>
#include <string>
using namespace std;
int main() {
    double total_bill = 0.0;
    char choice;
    cout << "===== Welcome to Our Restaurant =====\n";
    do {
        int main_menu;
        cout << "\n Main Menu \n";
        cout << "1. Breakfast"<<endl;
        cout << "2. Lunch"<<endl;
        cout << "3. Dinner"<<endl;
        cout << "Enter your choice (1-3): ";
        cin >> main_menu;
        int sub_choice;
        double quantity;
        double price_per_unit = 0.0;
        string item_name;
        if (main_menu == 1)
		 { 
            cout << "\n--- Breakfast Menu ---"<<endl;
            cout << "1. Anda Paratha (Rs.40 each)"<<endl;
            cout << "2. Nan Channy (Rs.60)"<<endl;
            cout << "3. Siri Paye (Rs.150)"<<endl;
            cout << "4. Tea (Rs.15)"<<endl;
            cout << "Choose item (1-4): "<<endl;
            cin >> sub_choice;
            if (sub_choice == 1) {
                price_per_unit = 40;  item_name = "Anda Paratha";
            }
            else if (sub_choice == 2) {
                price_per_unit = 60;  item_name = "Nan Channy";
            }
            else if (sub_choice == 3) {
                price_per_unit = 150; item_name = "Siri Paye";
            }
            else if (sub_choice == 4) 
			{
                price_per_unit = 15;  item_name = "Tea";
            }
        }
        else if (main_menu == 2 || main_menu == 3) 
		{ 
            cout << "\n--- Lunch/Dinner Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050 per KG)"<<endl;
            cout << "2. Mutton Karahi (Rs.1800 per KG)"<<endl;
            cout << "3. Egg Fried Rice (Rs.450 per plate)"<<endl;
            cout << "4. BBQ (Rs.1050 per dozen)"<<endl;
            if (main_menu == 2) 
			cout << "5. Saji (Rs.800 per KG)"<<endl; // Only in Dinner
            cout << "Choose item: "<<endl;
            cin >> sub_choice;
            if (sub_choice == 1) 
			{
                price_per_unit = 1050; item_name = "Chicken Karahi (KG)";
            }
            else if (sub_choice == 2) {
                price_per_unit = 1800; item_name = "Mutton Karahi (KG)";
            }
            else if (sub_choice == 3) {
                price_per_unit = 450;  item_name = "Egg Fried Rice (plate)";
            }
            else if (sub_choice == 4) {
                price_per_unit = 1050; item_name = "BBQ (dozen)";
            }
            else if (sub_choice == 5 && main_menu == 3) {
                price_per_unit = 800;  item_name = "Saji (KG)";
            }
        }
        
        cout << "How much " << item_name << " do you want? ";
        cin >> quantity;
        double item_cost = price_per_unit * quantity;
        total_bill += item_cost;
        cout << "Added: " << quantity << " x " << item_name 
             << " = Rs." << item_cost << endl;
        cout << "Current Total: Rs." << total_bill << endl;
       
        cout << "Do you want to order more items? (y/n): "<<endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\n===== Final Bill =====\n";
    cout << "Total Amount to Pay: Rs." << total_bill <<endl;
    cout << "Thank you! Visit again!"<<endl;
    return 0;
}
