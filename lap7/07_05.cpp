#include <iostream>
using namespace std;
    int main()
    {
        int salary,Hour,sum;
        char Late,OT;
            cout << "enter salary : ";
            cin >> salary;
            cout << "Late (Y/N) : ";
            cin >> Late;
             if (Late >= 'N' ){
                 salary=salary+1000;
          } else if (Late >= 'Y') {
                 salary=salary+0;
          }
            cout << "Over Time Hour (Y/N) : ";
            cin >> OT;
            cout << "enter OT Hour : ";
            cin >> Hour;
             if (OT >= 'Y' ){
                 sum=Hour*200;
                 cout << salary+sum << endl;
           } else if (OT >= 'N') {
                 sum=0; 
                 cout << salary+sum << endl;
          }  
        return(0);
    }