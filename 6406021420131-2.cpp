/*  Program 4_2 : Use if-else statement */
#include<iostream>
using namespace std;
    int main()
    {
        int Books,Toys,Model,Stationery,sum;
        double Payment;
        cout << "Input number of Books: ";
        cin >> Books;
               Books=Books*120;
        cout << "Input Number of Toys: ";
        cin >> Toys;
               Toys=Toys*80;
        cout << "Input Number of Model: ";
        cin >> Model;
               Model=Model*50;
        cout << "Input Number of Stationery: ";
        cin >> Stationery;
               Stationery=Stationery*15;

                sum=Books+Toys+Model+Stationery;
                Payment=1000;
            if(sum<=0) {
                Payment=Payment-(sum*0.5);
                cout << "Payment: "<< Payment <<endl;
          } else if (sum<=4999) {
                Payment=Payment-(sum*0.1);
                cout << "Payment: "<< Payment <<endl;
          } else if (sum<=9999) {
                Payment=Payment*0;
                cout << "Payment: "<< Payment <<endl; 
          } else if (sum<=99999) {
                Payment=Payment+(sum*0.05);
                cout << "Payment: "<< Payment <<endl;     
          } else {
                Payment=Payment+(sum*0.1);
                cout << "Payment: "<< Payment <<endl;    
          }     
        return(0);
    }