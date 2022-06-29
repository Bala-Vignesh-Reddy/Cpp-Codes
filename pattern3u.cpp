#include<iostream>
using namespace std;

/* Number pattern que
if input is 4 then output is 
4321
4321
4321
4321
*/
int main() {
    int n;
    cin >> n;

// While loop code
    int row = 1;
    while(row <= n){
        int col = 1;
        while (col <= n){
            cout << n - col + 1;
            col++;
        }
        cout << endl;
        row++;
    }
    
   //For loop Code
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            cout << n - col + 1;
        }
        cout << endl;
    }
}