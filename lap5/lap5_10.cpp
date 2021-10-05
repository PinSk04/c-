#include <iostream>
#include <string>
    using namespace std;
        int main()
            { 
                int salary;
                    cout << "\nEnter salary: ";
                        cin >> salary;
                    if (salary <= 100000) {
                        cout << "your vat 5%" << endl;
                            cout <<  salary*0.05 << endl;
                              }
                        if (salary > 100000) {
                              cout << "your vat 10%" << endl;
                              cout <<  salary*0.10 << endl;
                              }
                            if(salary >= 500000){
                                 cout << "your vat 20%" << endl;
                                  cout <<  salary*0.20 << endl;
                                    }
                                if(salary >= 1000000){
                                   cout << "your vat 30%" << endl;
                                   cout <<  salary*0.30 << endl;
                                        }
                                    if(salary > 4000000) {
                                       cout << "your vat 37%" << endl;
                                       cout <<  salary*0.37 << endl;
                                            }
                return(0);
            }