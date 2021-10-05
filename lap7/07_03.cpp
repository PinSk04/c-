#include<iostream>
using namespace std;
    int main()
    {
        double redious,choice,pi=3.14,circum,area,volume;
            cout << "enter the number of redious : ";
            cin >> redious;
            circum=2.0*redious*pi;
            cout << "calculate the circumference of ciecle  "<< endl;
            cout << "calculate the area of ciecle  "<< endl;
            cout << "calculate the Volume of ciecle : "<< endl;
            cout << "enter the choice : ";
            cin >> choice;
              if (choice == 1)
              {
                 circum = 2.0*pi*redious;
                 cout << "circumference of ciecle : "<< circum << endl;
              }
              if (choice == 2)
              {
                  area=pi*(redious*redious);
                  cout << "area of ciecle : "<< area << endl;
              }
               if (choice == 3)
              {
                  volume = (4.0/3.0)*pi*(redious*redious*redious);
                  cout << "Volume of ciecle : "<< volume << endl;
              }  

        return(0);
    }