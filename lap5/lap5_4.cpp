/* Program 4_4 : Use nested switch case statement */
#include <iostream>
#include <string>
using namespace std;
int main()
{
        cout << "Please enter a simple expression ";
        cout << "(number operator number) : ";
    int LeftOperand, RightOperand;
    char Operator;
        cin >> LeftOperand >> Operator >> RightOperand;
    int Result;
        switch (choice ) {

                case '1' :  string CalScore (int total) {
            string Grade;
                if(total >= 80);{
                    Grade = "A"; 
                }else if (total >= 75){
                    Grade = "B+"; 
                }else if (total >= 70){
                    Grade = "B"; 
                }else if (total >= 65){
                    Grade = "C+"; 
                }else if (total >= 60){
                    Grade = "C"; 
                }else if (total >= 55){
                    Grade = "D+"; 
                }else if (total >= 50){
                    Grade = "D"; 
                }else {
                    Grade = "F"; 
                }
                return(Grade);
            };

            break;
                case '2' :    string CalScore (int total) {
            string Grade;
            if(total >= 80){
                Grade = "4"; 
            }else if (total >= 75){
                Grade = "3.5"; 
            }else if (total >= 70){
                Grade = "3"; 
            }else if (total >= 65){
                Grade = "2.5"; 
            }else if (total >= 60){
                Grade = "2"; 
            }else if (total >= 55){
                Grade = "1.5"; 
            }else if (total >= 50){
                Grade = "1"; 
            }else {
                Grade = "0"; 
            }
        return(Grade);
            };
            break;
                default : cout << choice << " end";
            cout << endl;
        return(1);
    }
        cout << LeftOperand << " " << Operator << " ";
        cout << RightOperand << " equals " << Result << endl;
    return(0);
}