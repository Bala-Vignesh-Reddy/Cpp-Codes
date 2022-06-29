#include<iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter any Value " << endl;
    cin >> a;
    // ASCII value of a = 95 and z = 122
    // ASCII value of A = 65 and Z = 90
    // ASCII value of 1 = 48 and 0=57

    if (a >= 95 && a <= 122) {
        cout << "The Entered Value is in LowerCase. " << endl;
    }
    else if(a >= 65 && a <= 90) {
        cout << "The Entered Value is in UpperCase. " << endl;
    }
    else if(a >= 48 && a <= 57) {
        cout << "The Entered value if Number. " << endl;
    }
    return 0;
}