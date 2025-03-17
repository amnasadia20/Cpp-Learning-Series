#include <iostream>
#include<iomanip>
using namespace std;

/* Day 2 of Learning C++ with Amna Sadia.
Dated: 27.2.2025.
Day: Thursday.
*/
/* 
Topic Covered.
•	Constants, Manipulators & Operator Precedence.
•	C++ Control Structures
•	For, While and Do While Loops in C++
•	Break and Continue Statements in C++.
•	Pointers in C++
*/

void one();
void oprecedence();
void controlStruct();


int main() {
  one();
  oprecedence();
  controlStruct();
  // Constants.
  // You cannot change constatnts in C++.
  const int a=3;
  cout<<"The value of a is: "<<a<<endl;
  //a = 5; commenting it out because because of this all program is not going to run like it
  // will give an error and all code will stop here :)
  //cout<<"The value of a is changed to: "<<a;
// This code will give an error, because we cannot change the value of constants.
return 0;
  
}
// Manipulators.
void one() {
  int k =21, h=27, kh=48;
  cout<<"The value of k without setw is: "<<k<<endl;
  cout<<"The value of h without setw is: "<<h<<endl;
  cout<<"The value of kh without setw is: "<<kh<<endl;
  
  cout<<"The value of k is: "<<setw(4)<<k<<endl;
  cout<<"The value of h is: "<<setw(4)<<h<<endl;
  cout<<"The value of kh is: "<<setw(4)<<kh<<endl;
  
}

// Operator Precedence
void oprecedence() {
  int b = 56, c = 46;
  int d = ((((b*5)+c)-45)+87);
  cout<<d<<endl;
  
}
// C++ Control Structures.
/* CS give logic to the program.
1. Sequence Structure.
2. Solution Structure
3. Loop Structure.
These are our basic control structures.
- In sequece structure you enter the program, and you command program to be executed in sequence.
- In Selection Structure yo enter the program and you ask the question to the program if it is
true you perform a specific  a program and if false another program is executed.
- In Loop[ structre you enter the program and you check the loop and program is executed until
the condition becomes false, then you exit the program.
*/
void controlStruct() {
  
  int age;
  cout<<"Tell me your age: "<<endl;
  cin>>age;
  /*if (age<18){
   // cout<<"You can not go for a trip with friends."<<endl;
  //}
  //else if (age==18) {
   // cout<<"You can go on a trip with friends."<<endl;
  //} else {
  //  cout<<"Go and kill the waves"<<endl;
  }*/
  
  // Switch Case: Selection Control Structures.
  
  switch (age)
  {
    case 18:
    cout<<"You are 18"<<endl;
    break;
    case 22:
    cout<<"You are 22"<<endl;
    break;
    case 2:
    cout<<"You are 2"<<endl;
    break;
    
    default:
    cout<<"No special cases"<<endl;
    break;
    
  
  }
  //That's It for Day 2 JazakAllah Khair
}

