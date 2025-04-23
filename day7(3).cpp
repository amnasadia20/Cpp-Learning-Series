#include <iostream>
using namespace std;

// Program: Array within class

class arraydemo {
    int arr[10];

public:
    void setarr() {
        cout << "Enter 10 values:" << endl;
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    void displayarr() {
        cout << "You entered:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << endl;
        }
    }
};  // ✅ Don't forget this semicolon

int main() {
    arraydemo ad;
    ad.setarr();        // ✅ Method call with parentheses
    ad.displayarr();    // ✅ Same here
    return 0;
}