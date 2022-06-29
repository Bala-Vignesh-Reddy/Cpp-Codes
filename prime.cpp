#include<iostream>
using namespace std;

int main (){

    int n;
    cin >> n;
     
    int i = 2;
    while(i < n){
        if (n % i ==0){
            cout << " It is not a Prime Number for " << i << endl;
        }
        else {
            cout << " It is a Prime Number " << i << endl;
        }
        i = i + 1;
    } 

}