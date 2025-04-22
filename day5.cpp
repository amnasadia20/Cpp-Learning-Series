#include <iostream>
using namespace std;

//18/4/2025
//Uni Class
//Obect Oriented programming.
//Program - to demonstrat structures.
int main() 
{
    //private: By default class members are private.
    //public: By default structure members are public.
  struct Masjid {
    int masjidNum;
    int areaCode;
    int capacity;
    float fajrTime;
  };
  Masjid m1;
  m1.masjidNum = 1;
  m1.areaCode = 5;
  m1.capacity = 1000;
  m1.fajrTime = 4.40;
  
  cout<<"Masjid Number is "<<m1.masjidNum<<endl;
  cout<<"Area Code is "<<m1.areaCode<<endl;
  cout<<"The capacity of Masjid is "<<m1.capacity<<endl;
  cout<<"The time for Fajr prayer is "<<m1.fajrTime<<endl;
    
}