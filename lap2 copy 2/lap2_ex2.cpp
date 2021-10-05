/*   Program 2_9: Input value string by keyboard    */
#include  <iostream>
#include  <math.h>
using namespace std;
    int  main()
    {
        double Number1,Number2,Number3,X1,X2,root;
        cout << "AX^2 + BX + c = 0" << endl;
        cout << "Enter number A : ";
        cin >> Number1; 
        cout << "Enter number b : ";
        cin >> Number2;
        cout << "Enter number c : ";
        cin >> Number3; 
        
        cout << "Aswer "<< Number1 << "X^2 +"<< Number2 << "X + "<< Number1 <<  "= 0"<< endl;
        root = sqrt (Number2 * Number2 - 4 * Number1 * Number3);
        X1 = (-Number2 + root) / (2 * Number1);
        X2 = (-Number2 - root) / (2 * Number1);
        cout << "Aswer 1 = " << X1 << endl;
        cout << "Aswer 2 = " << X2 << endl;
        
       // cout <<  Number1 << " % "<< Number2;//
       // cout << " = "<< Number1 % Number2 << endl;//
        return(0);
    }