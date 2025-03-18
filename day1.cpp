#include <iostream>
using namespace std;

// Day 1 of Learning C++ with Amna Sadia
// Dated: 26/2/2025
// Day Wednesday.
/*
All Topics to Be Covered.
•	Variables✅
•	Variable Scopes ✅
•	Comments ✅
•	Data types ✅
•	Basic Input and Output ✅
•	Header Files and Operators ✅
•	Float Double and Long Double Literals ✅
•	Reference Variables and Typecasting ✅

*/

// Variables + Comments

void tut();
void third();
void operators();
void fdLdL();
void refvar();

int main() {
    int sum = 10;  // Variable declared and initialized
    cout << sum << endl;  // Added endl to move to a new line
    
    // Calling tut() function
    tut();
    third();
    operators();
    fdLdL();
    refvar();

    return 0;
}

// Variable Scope
// A variable is a container to hold data.
// Variable can be of different types.
// There are 5 Variables in C++.
/*
This is a multi-line comment.
Int, Float, Char, Double, and Boolean are 5 types of variables in C++.
Syntax for declaring variables in C++:
Data_type Variable_name = Value;

Variable Scope:
Scope of the variable is the region in code where the existence of variable is valid.
We have Local and Global variables in C++.

Local Variables are declared inside the braces of any function and can be accessed only from there.
Global Variables are declared outside any function and can be accessed from anywhere.

Can Local and global variables have the same name in C++? Yes, we will see it in the program.
*/

/* C++ Data Types.
Data types are the type of data a variable can hold, for example, an integer variable can hold 
integer data, a character type variable can hold character data.

Data types in C++ are categorized into 3 groups.
1. Built-in Data Types.
2. User-defined.
3. Derived.
*/

/* Built-in Data Types.
Int
Float
Char
Double
Boolean
*/

/* User Defined Data Types:
struct
union
enum
*/

/* Derived Data Types:
Array 
Function 
Pointer
*/

// Let's Code :)

void tut() {  // Changed from int tut() to void tut(), as no return is needed.
    int a = 19;
    int b = 20;
    float pi = 3.14;
    char initial = 'A';
    bool Boolean = true;

    cout << "This is day 1 of learning C++ together, Here the value of a is: "  
         << a << " and the value of b is: " << b << endl;  // Added endl for clarity
    cout << "\nThe value of pi is: "<<pi;
    cout <<"\nThe Value of char is: "<<initial;
    cout <<"\nThe value of Boolean is: "<<Boolean;
    
         
}

// More Notes:
/* Rules to declare variables in C++.
1. Variable names in C++ can range from 1 to 255 characters.
2. Must begin with the letter of alphabet or an underscore (_).
3. After first initial letter, varname can contain letters and numbers.
4. Variable names are case sensitive.
5. No spaces or special characters are allowed.
6. Any C++ keyword(a reserved word) can not be used in variable name. */

// C++ BASIC INPUT AND OUTPUT.
// Watch this video:
// C++ Series Video#5 Code with Harry
/*
C++ comes with libraries which help us in performing input and output. In C++ sequence of 
bytes corresponding to input and output are commonly known as streams.

1. Input Stream: Direction of flow of bytes takes place from input device (for e.g. keyboard)
to the main memory.

2. Output Stream: Direction of flow of bytes take place from main memory to the output device.
(for e.g. Display).

cout << is called the Insertion Operator.
cin >> is called the extraction operator.
 */
 
void third() {
  
  int num1, num2;
  
  cout <<"Enter the value of num 1: ";
  cin>> num1;
  
  cout <<"Enter the value of num2: ";
  cin>> num2;
  
  cout<< "The sum is: "<< num1+num2;
  
}

// See the List of Reserved Keywords in C++.
// Data Type Size and Range in C++. Please See. Don't Memorize just try to understand.
//Programmers don't need to memorize but they need to understand because the work of 
//programmer is logical thinking.

/*  C++ Header Files & Operators
What is header file iostream?
This is a system header file, it increases the functionality of our program.
There are many librariries in C++.
Some Libraries are depricated in C++.
Whenever a library is depricated, a new library is introduced.
*/

//Operators in C++.

// fOLLOWING ARE THE TYPES OF THE OPERATORS IN C++.

//1. Arithmetic Operators.

void operators() {
    int a = 5;
    int b = 15;

    cout << "Following are the types of the operators in C++.";
    cout << "\n1. The Arithmetic Operators";

    cout << "\n The value of a + b is: " << a + b;
    cout << "\n The value of a - b is: " << a - b;
    cout << "\n The value of a * b is: " << a * b;
    cout << "\n The value of a / b is: " << a / b;  // Removed division check

    cout << "\n The value of a++ is: " << a++;  // Post-increment
    cout << "\n The value of a after a++ is: " << a; // Showing updated value
    cout << "\n The value of a-- is: " << a--;  // Post-decrement
    cout << "\n The value of a after a-- is: " << a; // Showing updated value
    cout << "\n The value of ++a is: " << ++a;  // Pre-increment
    cout << "\n The value of --a is: " << --a;  // Pre-decrement
    
    // Assignment operators.--> Used to Assign values to operators.
    // int a = 5, b = 6;
    //char a = 'a'
    
    //Compararsion Operators.
    cout <<" The value of a == b is: "<<(a==b)<<endl;
    cout <<" The value of a != b is: "<<(a!=b)<<endl;
    cout <<" The value of a > b is: "<<(a<b)<<endl;
    cout <<" The value of a < b is: "<<(a>b)<<endl;
    cout <<" The value of a <= b is: "<<(a<=b)<<endl;
    cout <<" The value of a >= b is: "<<(a>=b)<<endl;
    
    // Logical Operators.
    cout <<" Following are the Logical Operators in C++"<<endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout << "The value of this logical not operator (!(a==b)) is: "<<!(a==b)<<endl;

}

// Float, Double and Long Double Literals.
// By default our decimal literal is known as double, but if we add f to it then it become float.
//34.4 = double. 34.4f = float. 34.4l = long double.

void fdLdL() {
  float d=34.4;
  long double e = 44.4;
  cout<<" The size of 34.4 is "<<sizeof(34.4)<<endl;
  cout<<" The size of 34.4f is "<<sizeof(34.4f)<<endl;
  cout<<" The size of 34.4F is "<<sizeof(34.4F)<<endl;
  cout<<" The size of 34.4l is "<<sizeof(34.4l)<<endl;
  cout<<" The size of 34.4L is "<<sizeof(34.4L)<<endl;
  
  cout<<"The value of float is "<<endl<<d<<endl<<"The value of e is "<<endl<<e;
}

// Reference Variables.

void refvar() {
    // If we want to call our program with two different variables we can use reference variable.
    float y = 685;
    float & x = y;
    cout<<y<<endl;
    cout<<x<<endl;
    
    // Typecasting.
    int u = 55;
    float v = 55.6;
    cout<<" The value of u is "<<u<<endl;
    cout<<" The value of u is "<<(float)u<<endl;
    cout<<" The value of u is "<<(double)u<<endl;
    
    cout<< "The expression is "<<u+v<<endl;
    cout<< "The expression is "<<u+int(v)<<endl;
    cout<< "The expression is "<<u+(int)v<<endl;
    
    
  }
