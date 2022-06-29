#include<iostream>
using namespace std;

int main() {
    /*
    int a = 6/2;    
    int b = 2*5;    
    int c = 2+5;    
    float d = 2.0/4;    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
*/
// logical operator
// && and operator
// || or operator
//  ! not of 
    
    int a1 = 2;
    int a2 = 3;

    bool first = (a1==a2); // equals to 
    cout << first << endl;
    
    bool second  = (a1 > a2);   // greater than
    cout << second << endl;

    bool third = (a1 < a2);     // less than 
    cout << third << endl;

    bool fourth = (a1 <= a2);   // greater than or equal to
    cout << fourth << endl;

    bool fifth = (a1 >= a2);    // less  than or equal to
    bool sixth = (a1 != a2);    // not equals to

    cout << fifth  << endl;
    cout << sixth  << endl;
    
    return 0;
}
