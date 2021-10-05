#include <iostream>
using namespace std;
    int main()
    {
        int day,month,year,sum;
             do
            {
              cout << "Please enter day month and year:";
              cin >> day ; cin >> month ; cin >> year;
            } while ((day>30)||(month>12)||(year>2599));
                
                day=day-1;
                month=(month-1)*30;
                year=((year-2513)*12)*30;
                sum=day+month+year;
           
            cout << "The difference is about "<< sum << " days";

        return(0);
    }