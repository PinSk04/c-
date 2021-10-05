#include <iostream>
#include <string.h>
using namespace std;
void CalGrade(string &name , string &lastname ,int &room , int &HW , int &test, int &mid , int &final);
int CalTotal(int room,int HW , int test,int mid,int final);
string CalScore(int total);
string CalScore1(int total);
string CalScore2(int total);
void PrintScore(int &total,string &Grade);
int main(){

    int room[10] , HW[15] , test[10] , mid[30] , final[30];
    int total[0];
    string Grade[20],name[15],lastname[15];
    for ( int i = 0; i < 14 ; i++)

    {
        CalGrade (name[i],lastname[i],room[i],HW[i],test[i],mid[i],final[i]);
        total[i] = CalTotal(room[i],HW[i],test[i],mid[i],final[i]);
        Grade[i] = CalScore(total[i]);
		PrintScore(total[i],Grade[i]);
    }

    return(0);
}
void CalGrade(string &name , string &lastname ,int &room , int &HW , int &test, int &mid , int &final){
       
        cout << "Enter Score name = ";
        cin >> name;
        cout << "Enter Score lastname = ";
        cin >> lastname;
        cout << "Enter Score room = ";
        cin >> room;
        cout << "Enter Score hamework = ";
        cin >> HW;
        cout << "Enter Score Test = ";
        cin >> test;
        cout << "Enter Score Mid = ";
        cin >> mid;
        cout << "Enter Score Final = ";
        cin >> final;
}

int CalTotal(int room,int HW , int test,int mid,int final){
    int total = room + HW + test + mid + final;
    return(total);
}

string CalScore(int total){
    string Grade;
    if(total >= 80){
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
}

string CalScore1(int total){
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
}

string CalScore1(int total){
    string Grade;
    if(total >= 50){
        Grade = "Pass"; 
    }else if (total <= 49){
        Grade = "don't Pass"; 
    }
 return(Grade);
}

void PrintScore(int &total,string &Grade){
    cout <<"Total : " << total << endl;
	cout <<"Grade : " << Grade <<endl;
	cout << "--------------------------------------" << endl;
}
