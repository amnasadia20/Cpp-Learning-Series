#include <iostream>
using namespace std;

// Program: static members

class staticdemo
{
    static int count;  // ✅ Static member declared
    int num;

public:
    void getnum()
    {
        cout << "Enter the value of num: ";
        cin >> num;
        count++;  // ✅ increment static variable
    }

    void displaynum()
    {
        cout << "\nValue of num is: " << num;
        cout << "\nValue of count is: " << count;
    }
};

// ✅ Static member definition outside the class
int staticdemo::count = 0;

int main()
{
    staticdemo o1, o2, o3;

    o1.getnum();
    o2.getnum();
    o3.getnum();

    o1.displaynum();
    o2.displaynum();
    o3.displaynum();

    return 0;
}
