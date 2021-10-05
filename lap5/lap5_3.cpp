#include <iostream>
#include <string>
    using namespace std;
        int main()
            { 
                double S ;
                    cout << "\nEnter salary: ";
                        cin >> S;
                        if (S >= 100,000) {
                              cout << S*500 << endl;
                              }
                            else if(S >= 500,000){
                                    cout << S/1000 << endl;
                                    }
                                else if(S >= 500,000){
                                       cout << S/2000 << endl;
                                       }
                                    else if(S >= 1,000,000){
                                           cout << S*3000 << endl;
                                           }
                                        else if(S >= 4,000,000) {
                                            cout << S*3700 << endl;
                                             }
                                        else 
                                            cout << "no vat" << endl;
                   
                return(0);
            }