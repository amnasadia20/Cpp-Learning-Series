#include <iostream>
using namespace std;

/* Day 3 of Learning C++ with Amna Sadia.
Dated: 
Day: 
*/
/* 
Topic Covered.
•	For, While and Do While Loops in C++
•	Break and Continue Statements in C++.
*/
void homeWork();
void breakCont();
//Commentout all the loops in order to run one loop, don't commentout that one loop you want to printout.


int main() {
  // Loops.
  /* Loops are a block of code which are executed repeatedly.
  There are 3 types of loops in C++.
  1. For Loop.
  2. While Loop.
  3. Do While Loop.
  */
//  for(int i=0; i<40; i++) {
  // cout<<i<<endl;
  //  i++;
  //}
  //While Loop in C++;
  int i =1;
  //while(i<=40) {
//    cout<<i<<endl;
//    i++;
//    
  //}
  // Do While Loop in C++.
  //do{
    //cout<<i<<endl;
//    i++;
//  } while (i<=40);
  
  homeWork();
  breakCont();
  
  return 0;
}

void homeWork() {//Printing table of 6.
  int t =6;
  int m =1;
  do{
    cout<<t*m<<endl;
    m++;
  } while(m<=10);
}

//Break and Continue Statments in C++.

void breakCont() {
  for(int i=0; i<4; i++)
  {
    cout<<i<<endl;
    if(i==2){
      break;
    }
  } // commentout first block to execute second one and commentout second block to execute first one.
    for(int i=0; i<4; i++)
  {
    cout<<i<<endl;
    if(i==2){
      continue;
    }
    cout<<i<<endl;
  }
}
