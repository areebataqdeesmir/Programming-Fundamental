#include <iostream>
using namespace std;

int main() {
    // Outer loop: Yeh 5 se 1 tak ulta chalega (Line count)
    for (int i = 5; i >= 1; i--) {
        
        // Inner loop: Yeh 'i' tak chalega, '5' tak nahi
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Line khatam hone ke baad niche wali line par jane ke liye
        cout << endl;
    }
    
    return 0;
}
