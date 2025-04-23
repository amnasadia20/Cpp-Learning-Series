#include <iostream>
using namespace std;

// Program: Demo of private function access control
class privatedemo {
    int num;

    void zeronum() {  // private function
        num = 0;
    }

public:
    void setnum(int a) {
        num = a;
    }

    void clearnum() {
        if (num < 100) {
            zeronum();  // allowed: calling private function from inside the class
        } else {
            cout << "Number is more than 100 so we cannot reset to 0." << endl;
        }
    }

    void display() {
        cout << "Current number is: " << num << endl;
    }
};

int main() {
    privatedemo pd;      // create object
    pd.setnum(5);        // set value
    pd.clearnum();       // safely clears num using internal logic
    pd.display();        // show current value

    return 0;
}

