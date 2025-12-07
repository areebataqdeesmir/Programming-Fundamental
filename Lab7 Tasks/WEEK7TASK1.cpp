#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    float total, percentage;
    char g1, g2, g3;

    cout << "Enter marks of Subject 1: ";
    cin >> s1;
    cout << "Enter marks of Subject 2: ";
    cin >> s2;
    cout << "Enter marks of Subject 3: ";
    cin >> s3;

    total = s1 + s2 + s3;
    percentage = (total / 300) * 100;

    if (percentage >= 90) g1 = g2 = g3 = 'A';

    if (s1 >= 90) g1 = 'A';
    else if (s1 >= 80) g1 = 'B';
    else if (s1 >= 70) g1 = 'C';
    else if (s1 >= 60) g1 = 'D';
    else g1 = 'F';


    if (s2 >= 90) g2 = 'A';
    else if (s2 >= 80) g2 = 'B';
    else if (s2 >= 70) g2 = 'C';
    else if (s2 >= 60) g2 = 'D';
    else g2 = 'F';

    if (s3 >= 90) g3 = 'A';
    else if (s3 >= 80) g3 = 'B';
    else if (s3 >= 70) g3 = 'C';
    else if (s3 >= 60) g3 = 'D';
    else g3 = 'F';

 
    if (g1 == 'F' || g2 == 'F' || g3 == 'F') {
        cout << "Total Marks = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;
        cout << "Result: FAILED (Grade F in a subject)" << endl;
        return 0;
    }

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    cout << "Grades: " << g1 << ", " << g2 << ", " << g3 << endl;

    if (g1 == 'A' && g2 == 'A' && g3 == 'A') {
        if (total >= 270) {
            cout << "Merit Scholarship: Eligible" << endl;
        }
    }
    else if (g1 == 'B' && g2 == 'B' && g3 == 'B') {
        if (total >= 240) {
            cout << "Regular Scholarship: Eligible" << endl;
        }
    }
    else {
        cout << "Scholarship: Not Eligible" << endl;
    }
    return 0;
}

