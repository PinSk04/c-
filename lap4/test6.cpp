#include<iostream>
using namespace std;
    int main()
    {
        int f, m ;
            cout << "----amount----" << endl;
            cout << "fish = ";
            cin >> f ;
            cout << "tomato = " ;
            cin >> m ;        
        if (f < m)
        {
            cout << "=" << f/3 << endl;
        } else {
            cout << "=" << m/2 << endl;
        }
        return(0);
    }