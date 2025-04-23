#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

// Program: Accept binary and display one's complement

class binary {
    string s;

public:
    void read() {
        cout << "Enter a binary number: ";
        cin >> s;
    }

    void chk_bin() {
        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) != '0' && s.at(i) != '1') {
                cout << "Incorrect Binary Number" << endl;
                exit(0);
            }
        }
    }

    void ones() {
        chk_bin();
        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) == '0')
                s.at(i) = '1';
            else
                s.at(i) = '0';
        }
    }

    void displayones() {
        ones(); // Nested function call
        cout << "One's complement of the binary number is: " << s << endl;
    }
};

int main() {
    binary b;
    b.read();
    b.displayones();
    
    return 0;
}
