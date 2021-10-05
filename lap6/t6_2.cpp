#include <iostream>
using namespace std;
int main(){
    float petroleum ,mileage, per_lit=4.5461 , per_kilo=1.6093 , per_gallon , sum_mil;
    float lit_kilo , kilometers ;
    cout << "input petroleum used :";
    cin >> petroleum ;
    cout << "input mileage :";
    cin >> mileage ;
    per_gallon=mileage/petroleum;
    sum_mil=mileage*per_kilo;
    lit_kilo=petroleum*per_lit;
    lit_kilo=lit_kilo/sum_mil;
    kilometers=(sum_mil/2)/per_lit;
    cout <<"Fuel economy = "    <<per_gallon<<  " Milles per pergallon (MPG)" <<endl;
    cout <<"The car will use  " <<lit_kilo<<    " Leter per kilometers" <<endl;
    cout <<"Fuel economy = "    <<kilometers<<  " kilometers per Leter" ;
    return 0 ;
}