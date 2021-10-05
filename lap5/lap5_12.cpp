#include <iostream>
#include <string>
    using namespace std;
        int main()
            { 
               double S ;
                    cout << "\nEnter salary: ";
                        cin >> S;
                        if (S > 0) {
                              cout << "number is positive" << endl;
                              }
                            else if (S < 0) {
                                    cout << "number is nagative" << endl;
                                    }
                                else {
                                       cout << "number is zero" << endl;
                                       }
                return(0);
            }