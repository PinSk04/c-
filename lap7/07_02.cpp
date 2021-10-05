#include<iostream>
using namespace std;
    int main()
    {
        int Project,Mid,final,Score;
       for (int i = 1; i <= 3; i++)
       {
            cout << "students  : "<< i << endl;
            cout << "Enter Project : ";
            cin >> Project;
            cout << "Enter Midterm : ";
            cin >> Mid;
            cout << "Enter final : ";
            cin >> final;
        
            if (Project>20){
                Project=0;
                cout << "Project Eror!!!" << endl;
          } if (Mid>30){
                Mid=0;
                
               cout << "A\n" << endl; 
          }  
          
    } 
      
        return(0);
    }