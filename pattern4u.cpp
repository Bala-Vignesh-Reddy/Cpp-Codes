#include<iostream>
using namespace std;

/* Number pattern que
if input is 3 then output is 
9 8 7 
6 5 4 
3 2 1
*/
int main() {
    int n;
    cin >> n;
    int row = 1;
    int val = n * n;

// While loop code


    while(row <= n){
        int col = 1;
        while (col <= n){
            cout << val << " ";
            val--;
            col++;
        }
        cout << endl;
        row++;
    }
    
   //For loop Code
    
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            cout << val << " ";
            val--;
        }
        cout << endl;
    }

}