#include<iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 6;

    cout << " a&b " << (a&b) << endl;   //and  agar T T ho to T baki sab mai F
    cout << " a|b " << (a|b) << endl;   //or   agar F F ho to F baki sab mai T
    cout << " ~a " << ~a << endl;       //not  agar T ho to F and vice-versa
    cout << " a^b " << (a^b)  << endl;   //xor dono mai koi ak true hona chaiye
    
    cout << (17 << 1) << endl;      //left shift    
    cout << (9 >> 2) << endl;      //right shift dividing the number by 2

    //increment for i = i + 1 can be written as i++(post) or ++i(pre)
}
