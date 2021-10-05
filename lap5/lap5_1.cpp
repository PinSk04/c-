/*  Program 4_3 : Use nested if-else statement */
#include <iostream>
#include <string>
    using namespace std;
        int main()
            { 
                char a;
                    cout << "\nEnter a character : ";
                    cin >> a;
                    cout << endl;
                        if(a >= '0'&& a <= '9')
                                    cout << a << " is numeric.";
                                else 
                                     cout << a << " is not numeric";
                                     cout << endl;
                return(0);
            }