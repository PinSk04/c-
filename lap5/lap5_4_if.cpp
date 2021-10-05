#include <iostream>
#include <string>
using namespace std;
    int main ()
{
        cout << "Please enter a simple expression ";
        cout << "(number operator number) : ";

    int LeftOperand, RightOperand;
    char Operator;

        cin >> LeftOperand >> Operator >> RightOperand;

    int Result;

            if( Operator == '+') 
                Result = LeftOperand + RightOperand;
            if( Operator == '-') 
                Result = LeftOperand + RightOperand;
            if( Operator == '*') 
                Result = LeftOperand + RightOperand;
            if( Operator == '/') 
                Result = LeftOperand + RightOperand;
            cout << endl;  
                 
        return(1);
   
        cout << LeftOperand << " " << Operator << " ";
        cout << RightOperand << " equals " << Result << endl;    

    return(0);
}