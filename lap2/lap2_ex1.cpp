/*   Program 2_9: Input value string by keyboard    */
#include  <iostream>
#include  <string>
using namespace std;
    int  main()
    {
       int Number1,Number2;
        cout << "Enter number1 : ";
        cin >> Number1; 
        cout << "Enter number2 : ";
        cin >> Number2;
        cout << "Result of"<< endl;
        cout <<  Number1 << " + "<< Number2;
        cout << " = "<< Number1 + Number2 << endl;
        cout <<  Number1 << " - "<< Number2;
        cout << " = "<< Number1 - Number2 << endl;
        cout <<  Number1 << " * "<< Number2;
        cout << " = "<< Number1 * Number2 << endl;
        cout <<  Number1 << " / "<< Number2;
        cout << " = "<< Number1 / Number2 << endl;
        cout <<  Number1 << " % "<< Number2;
        //cout << " = "<< Number1 %Number2 << endl;//
        return(0);
    }