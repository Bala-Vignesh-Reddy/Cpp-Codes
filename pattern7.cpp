#include<iostream>
using namespace std;
/* Number pattern que
if input is 4 then output is 
1
2 3 
4 5 6
7 8 9 10
*/

int main() {
    
    int n;
    cin >> n;

// While loop code
    int row = 1;
    int val = 1;
    while(row <= n){
        int col = 1;
        while (col <= row){
            cout << val << " ";
            val++;
            col++;
        } 
        cout << endl;
        row++;
    }

// For loop code

    int val = 1;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
}
