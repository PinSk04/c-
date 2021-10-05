/*  Program 4_2 : Use if-else statement */
#include<iostream>
using namespace std;
    int main()
    {
        int num1;
        cout << "\nEnter number : ";
            cin >> num1;
                if(num1 >= 50) {/* Condition True  */
                    cout << "your pass"<< endl;
                }else{/* Condition False  */
                    cout << "your Failed !!!"<< endl;
                }
        return(0);
    }