#include<iostream>
using namespace std;

int main() {

   /* //PRINT 1 TO N NUMBERS

    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i = i + 1;
    }



    // SUM of EVEN NUMBER FROM 1 TO N
    
    int n;
    cin >> n;
    int sum = 0;
    int i = 2;
    while(i <= n){
        if (i % 2 == 0) 
            sum = sum + i;
        i = i + 1;
        
    }
    cout << "The Sum of Even number from 1 to " << n << " is : " << sum << endl;*/


    // SUM OF ODD NUMBERS

    int n;
    cin >> n;
    
    int i = 1;
    int sum = 0;
    while(i <= n) {
        if (i % 2 != 0){
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << "The Sum of Odd numbers from 1 to " << n << " is : " << sum << endl;


    return 0;
}
