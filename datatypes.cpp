#include<iostream>
using namespace std;


int main(){

/* trick to make commments */

    int a; //declaration
    a = 12; //initialisation
    cout << " size of int " << sizeof(a) << endl;
    
    float b;
    cout << " size of float " << sizeof(b) << endl;

    char c;
    cout << " size of char " << sizeof(c) << endl;
    
    bool d;
    cout << " size of bool " << sizeof(d) << endl;

    int a1 = 'a';
    cout << " Type cast " << a1 <<  endl;

    int a2 = -12;
    cout << a2 << endl;

    unsigned int a3 = 8; //accepts only the positive number
    cout <<  a3 << endl;



}