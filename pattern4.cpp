#include<iostream>
using namespace std;

/* Number pattern que
if input is 4 then output is 
123
456
789
*/
int main() {
    int n;
    cin >> n;

// While loop code
    int row = 1;
    int val = 1;
    while(row <= n){
        int col = 1;
        while (col <= n){
            cout << val;
            val++;
            col++;
        }
        cout << endl;
        row++;
    }
    
   //For loop Code
    
    int val = 1;
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            cout << val;
            val++;
        }
        cout << endl;
    }

    //Tavish Logic
    int a1 = n * n;
    int b ;
    for (int row = 1; row <= n; row++){
        for(int col = 1; col <= a1; col = col + b){    
            cout << col;
        }
        cout << endl;        
    }
}