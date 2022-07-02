
#include<iostream>
using namespace std;
/* Number pattern que
if input is 4 then output is 
1
2 2
3 3 3 
4 4 4 4 
*/

int main() {
    
    int n;
    cin >> n;

// While loop code
    int row = 1;
    while(row <= n){
        int col = 1;
        while (col <= row){
            cout << row << " ";
            col++;
        } 
        cout << endl;
        row++;
    }

// For loop code
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            cout << row << " ";
        }
        cout << endl;
    }
}
