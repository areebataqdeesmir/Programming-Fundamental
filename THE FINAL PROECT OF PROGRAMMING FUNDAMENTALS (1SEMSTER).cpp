#include <iostream>
#include <string>
#include <iomanip>
#include <sstream> 

using namespace std;

// --- SMART FUNCTIONS ---

void predictWeatherAndAdvice(int month, string venue) {
    cout << "\n========== SMART ADVISOR OPINION ==========" << endl;
    string forecast, opinion;

    if (month == 12 || month == 1) {
        forecast = "Severe Cold & Heavy Fog";
        opinion = (venue == "Outdoor" || venue == "outdoor") 
                  ? "BAD IDEA: Too foggy and cold. Guests will be uncomfortable." 
                  : "EXCELLENT: Indoor halls with heating are perfect.";
    } 
    else if (month >= 5 && month <= 7) {
        forecast = "Extreme Heatwave ";
        opinion = (venue == "Outdoor" || venue == "outdoor") 
                  ? "RISKY: Daytime heat will be unbearable. Keep it late at night." 
                  : "GOOD: Ensure the hall has powerful Air Conditioning.";
    }
    else if (month == 8) {
        forecast = "Monsoon (Heavy Rain Season)";
        opinion = (venue == "Outdoor" || venue == "outdoor") 
                  ? "EMERGENCY: High rain risk. Decor and food could get ruined!" 
                  : "SAFE: Indoor venue is the only way to avoid rain.";
    }
    else if (month == 3 || month == 4 || month == 10 || month == 11) {
        forecast = "Pleasant & Clear Skies";
        opinion = "PERFECT: Outdoor events will look beautiful in this weather.";
    }
    else {
        forecast = "Moderate / Average";
        opinion = "NEUTRAL: Both indoor and outdoor are fine.";
    }

    cout << "Predicted Weather : " << forecast << endl;
    cout << "Our Recommendation: " << opinion << endl;
    cout << "===========================================" << endl;
}

int main() {
    const int MAX = 50;
    string customerNames[MAX];
    string eventDetails[MAX];
    double individualBills[MAX];
    string bookingDates[MAX];
    int eventCount = 0;

    // --- PRE-LOADED DATA ---
    customerNames[0] = "Shiza Mukhtar"; eventDetails[0] = "Wedding + Catering"; individualBills[0] = 2800.0; 
    bookingDates[0] = "12-10-2026"; eventCount++;

    customerNames[1] = "Sara Khan"; eventDetails[1] = "Birthday + Theme"; individualBills[1] = 620.0; 
    bookingDates[1] = "15-11-2025"; eventCount++;

    customerNames[2] = "Samia Arshad"; eventDetails[2] = "Corporate + Catering"; individualBills[2] = 1850.0; 
    bookingDates[2] = "20-12-2025"; eventCount++;

    int mainChoice;
    bool systemRunning = true;

    while (systemRunning) {
        cout << "\n==========================================================" << endl;
        cout << "         EVENT PRO: EVENT MANAGEMENT SYSTEM (V3.0)        " << endl;
        cout << "==========================================================" << endl;
        cout << "1. Create New Event Booking " << endl;
        cout << "2. View All Active Bookings" << endl;
        cout << "3. Search Records by Customer Name" << endl;
        cout << "4. Update/Modify Existing Bill" << endl; 
        cout << "5. View Financial Statistics (Revenue)" << endl;
        cout << "6. System Reset (Delete All Records)" << endl;
        cout << "7. System Developer Credits" << endl;
        cout << "8. Exit System" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Select Command (1-8): ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1: { 
                if (eventCount >= MAX) {
                    cout << "\n[Full] Database capacity reached!" << endl;
                    break;
                }
                string name, venue, themeName = "Standard";
                int d, m, y, typeChoice, sub, guests, rating;
                double total = 0, eventPrice = 0, themePrice = 0, foodRate = 0;
                char opt;

                cout << "\n--- New Booking Details ---" << endl;
                cout << "Customer Name: "; cin.ignore(); getline(cin, name);
                cout << "Event Date (DD MM YYYY): "; cin >> d >> m >> y;
                cout << "Number of People (Guests): "; cin >> guests;
                cout << "Venue Type (Indoor/Outdoor): "; cin >> venue;

                predictWeatherAndAdvice(m, venue);

                // ---  EVENT TYPES ---
                cout << "\n--- SELECT EVENT TYPE ---" << endl;
        
                cout << "1.  Birthday ($500)" << endl;
                cout << "2.  Wedding ($2000)" << endl;
                cout << "3.  Corporate ($1000)" << endl;
                cout << "4.  Engagement ($1500)" << endl;
                cout << "5.  Seminar ($800)" << endl;
                cout << "6.  Concert ($3000)" << endl;
                cout << "7.  Workshop ($700)" << endl;
                cout << "8.  Exhibition ($2500)" << endl;
                cout << "9.  Party ($600)" << endl;
                cout << "10. Nikkah ($1200)" << endl;
                cout << "Choice (1-10): "; cin >> typeChoice;

                string summary;
                double ePrices[] = {0, 500, 2000, 1000, 1500, 800, 3000, 700, 2500, 600, 1200};
                string eNames[] = {"", "Birthday", "Wedding", "Corporate", "Engagement", "Seminar", "Concert", "Workshop", "Exhibition", "Party", "Nikkah"};
                
                if(typeChoice >= 1 && typeChoice <= 10) {
                    summary = eNames[typeChoice];
                    eventPrice = ePrices[typeChoice];
                } else {
                    summary = "Custom Event";
                    eventPrice = 500;
                }

                // --- 10 THEME OPTIONS ---
                cout << "\nInclude Premium Theme? (y/n): "; cin >> opt;
                if (opt == 'y' || opt == 'Y') {
                    cout << "\n--- SELECT THEME ---" << endl;
                    cout << "1.  Princess ($100)" << endl;
                    cout << "2.  Superhero ($120)" << endl;
                    cout << "3.  Royal ($300)" << endl;
                    cout << "4.  Vintage ($250)" << endl;
                    cout << "5.  Neon Night ($400)" << endl;
                    cout << "6.  Minimalist ($150)" << endl;
                    cout << "7.  Arabian ($350)" << endl;
                    cout << "8.  Garden ($200)" << endl;
                    cout << "9.  Space ($450)" << endl;
                    cout << "10. Winter ($300)" << endl;
                    cout << "Choice (1-10): "; cin >> sub;
                    
                    double tPrices[] = {0, 100, 120, 300, 250, 400, 150, 350, 200, 450, 300};
                    string tNames[] = {"", "Princess", "Superhero", "Royal", "Vintage", "Neon", "Minimalist", "Arabian", "Garden", "Space", "Winter"};
                    
                    if(sub >= 1 && sub <= 10) {
                        themeName = tNames[sub];
                        summary += " + " + themeName + " Theme";
                        themePrice = tPrices[sub];
                    }
                }
                
                // --- GUEST BASED FOOD LOGIC ---
                cout << "\nAdd Food Package? (y/n): "; cin >> opt;
                if (opt == 'y' || opt == 'Y') {
                    cout << "1. Basic ($15/p)\n2. Premium ($35/p)\n3. Executive ($60/p)" << endl;
                    cout << "Choice: "; cin >> sub;
                    foodRate = (sub == 1) ? 15.0 : (sub == 2) ? 35.0 : 60.0;
                    summary += " + Catering";
                }

                // Experience Rating
                cout << "\nRate your booking experience (1-5 Stars): "; cin >> rating;

                double foodTotal = foodRate * guests;
                double subTotal = eventPrice + themePrice + foodTotal;
                double tax = subTotal * 0.05; // 5% Tax
                double discount = (guests > 100) ? 50.0 : 0.0; // $50 discount if guests > 100
                total = subTotal + tax - discount;

       // ---  PERFECTLY ALIGNED RECEIPT ---
                cout << "\n\n==================================================";
               // --- FINAL ALIGNED RECEIPT (STRICT COLUMN LOCK) ---
                cout << "\n\n==================================================";
                cout << "\n           EVENT PRO MANAGEMENT SERVICES          ";
                cout << "\n       Street 12, Blue Area, Islamabad, PK        ";
                cout << "\n==================================================";
                cout << "\n INVOICE NO:  #EP-2026-" << (100 + eventCount);
                cout << "\n DATE:        " << d << "-" << m << "-" << y;
                cout << "\n CUSTOMER:    " << name;
                cout << "\n GUESTS:      " << guests;
                cout << "\n VENUE:       " << venue;
                cout << "\n--------------------------------------------------";
                // Header: Fixed widths for total 50 chars
                cout << "\n " << left << setw(20) << "ITEM DESCRIPTION" 
                     << left << setw(10) << "QTY" 
                     << right << setw(18) << "AMOUNT";
                cout << "\n--------------------------------------------------";
                
                // Item 1: Event
                cout << "\n 1. " << left << setw(16) << eNames[typeChoice].substr(0,16) 
                     << left << setw(10) << "1" 
                     << right << setw(10) << "$" << right << setw(9) << fixed << setprecision(2) << eventPrice;
                
                // Item 2: Theme
                cout << "\n 2. " << left << setw(16) << themeName.substr(0,16) 
                     << left << setw(10) << (themePrice > 0 ? "1" : "0") 
                     << right << setw(10) << "$" << right << setw(9) << themePrice;
                
                // Item 3: Catering
                cout << "\n 3. " << left << setw(16) << "Catering" 
                     << left << setw(10) << guests 
                     << right << setw(10) << "$" << right << setw(9) << foodTotal;
                
                cout << "\n--------------------------------------------------";
                // Totals Section - Purely Right Aligned to match Amount Column
                cout << "\n " << left << setw(30) << "SUBTOTAL:" << right << setw(7) << "$" << right << setw(11) << subTotal;
                cout << "\n " << left << setw(30) << "SERVICE TAX (5%):" << right << setw(7) << "$" << right << setw(11) << tax;
                cout << "\n " << left << setw(30) << "DISCOUNT:" << right << setw(7) << "-$" << right << setw(11) << discount;
                cout << "\n--------------------------------------------------";
                cout << "\n " << left << setw(30) << "TOTAL PAYABLE:" << right << setw(7) << "$" << right << setw(11) << total;
                cout << "\n--------------------------------------------------";
                cout << "\n EXPERIENCE RATING: ";
                for(int i=0; i<rating && i<5; i++) cout << "* ";
                cout << "\n STATUS: BOOKED & CONFIRMED";
                cout << "\n--------------------------------------------------";
                cout << "\n    Thank you for choosing EVENT PRO, " << name << "!";
                cout << "\n==================================================\n";
                customerNames[eventCount] = name;
                stringstream ss;
                ss << d << "-" << m << "-" << y;
                bookingDates[eventCount] = ss.str();
                eventDetails[eventCount] = summary;
                individualBills[eventCount] = total;

                eventCount++;
                break;
            }

            case 2: { 
                cout << "\n" << left << setw(18) << "Customer" << setw(15) << "Date" << setw(50) << "Summary" << setw(10) << "Bill" << endl;
                cout << "----------------------------------------------------------------------------------------------------------------" << endl;
                for (int i = 0; i < eventCount; i++) {
                    cout << left << setw(18) << customerNames[i] 
                         << setw(15) << bookingDates[i] 
                         << setw(50) << eventDetails[i] 
                         << "$" << fixed << setprecision(2) << individualBills[i] << endl;
                }
                break;
            }

            case 3: { 
            
                string sName; bool found = false;
                cout << "Enter Customer Name to Search: "; cin.ignore(); getline(cin, sName);
                for (int i = 0; i < eventCount; i++) {
                    if (customerNames[i] == sName) {
                        cout << "\n--- Booking Found ---" << endl;
                        cout << "Name: " << customerNames[i] << " | Date: " << bookingDates[i] << endl;
                        cout << "Services: " << eventDetails[i] << " | Bill: $" << individualBills[i] << endl;
                        found = true;
                    }
                }
                if (!found) cout << "No record found for: " << sName << endl;
                break;
            }

            case 4: { 
                string uName; bool found = false;
                cout << "Enter Customer Name to Update Bill: "; cin.ignore(); getline(cin, uName);
                for (int i = 0; i < eventCount; i++) {
                    if (customerNames[i] == uName) {
                        cout << "Current Bill: $" << individualBills[i] << endl;
                        cout << "Enter NEW Bill Amount: $"; cin >> individualBills[i];
                        cout << "\n[Success] Bill updated!" << endl;
                        found = true; break;
                    }
                }
                if (!found) cout << "Record not found." << endl;
                break;
            }

            case 5: { 
                double grandTotal = 0;
                for (int i = 0; i < eventCount; i++) grandTotal += individualBills[i];
                cout << "\n--- FINANCIAL REPORT ---" << endl;
                cout << "Total Active Bookings: " << eventCount << endl;
                cout << "Total System Revenue:  $" << fixed << setprecision(2) << grandTotal << endl;
                break;
            }

           case 6: { 
            char confirm; 
            cout << "\n[WARNING] Are you sure you want to delete ALL records? (y/n): "; 
            cin >> confirm;
    
    if (confirm == 'y' || confirm == 'Y') { 
        eventCount = 0; 
        for(int i = 0; i < MAX; i++) {
            customerNames[i] = "";
            eventDetails[i] = "";
            individualBills[i] = 0.0;
            bookingDates[i] = "";
        }

        cout << "\n[System] All records have been wiped successfully." << endl; 
    } else {
        cout << "\n[System] Reset cancelled." << endl;
    }
    break;
}

            case 7: { 
                cout << "\n--- System Developer Information ---" << endl;
                cout << "Programmer Name: Areeba Taqdees Mir" << endl;
                cout << "Project: Event Management System V3.0" << endl;
                cout << "Status: Optimized for Final Submission" << endl;
                break;
            }

            case 8:
                systemRunning = false;
                cout << "Terminating System... Goodbye!" << endl;
                break;

            default: cout << "Invalid Selection! Use 1-8." << endl;
        }
    }
    return 0;
}
