/*  Program 4_2 : Use if-else statement */
#include<iostream>
using namespace std;
    int main()
    {
        int year;
        cout << "\nEnter year : ";
        cin >> year;
            if((year % 4)==0 && (year % 100)){
                cout << "year "<< year << " is a leap year ";
          } else if ((year % 100)==0 && (year % 400)==0) {
                cout << "year "<< year << " is a leap year ";
          } else 
                cout << "year "<< year << " is not a leap year ";       
        return(0);
    }