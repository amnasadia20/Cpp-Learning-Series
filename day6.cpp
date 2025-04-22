#include <iostream>
using namespace std;

//22/4/2025
//Program - to demonstrat classes.
class Item {
    int a;
    int b;

public:
    // Function to set values
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    // Function to display values
    void showData() const {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};

int main() 
{
    // Creating object of class Item
    Item myItem;

    // Setting values
    myItem.setData(10, 20);

    // Displaying values
    myItem.showData();

    return 0;
}