#include<iostream>
using namespace std;
//Write a function that takes an unsigned integer 
//and returns the number of '1' bits it has (also known as the Hamming weight).
int main() {
    int n;
    cin >> n;
    
    int c = 0;
    while (n != 0){
        if (n & 1){
            c++;
        }
        n++;
    }
    cout << c << endl;    
}
