/*  Program 4_3 : Use nested if-else statement */
#include <iostream>
#include <string>
    using namespace std;
        int main()
            { 
                int S;
                    cout << "\nEnter score: ";
                        cin >> S;
                    if(S >= 0 && S <= 100){
                        if(S >= 80) 
                              cout << "grade A" << endl;
                            else if(S >= 70)
                                    cout << "grade b" << endl;
                                else if(S >= 60)
                                        cout << "grade c" << endl;
                                    else if(S >= 50)
                                            cout << "grade d" << endl;
                                        else 
                                            cout <<"grade f" << endl;
                    }
                         else 
                            cout <<"Error" << endl;
                return(0);
            }