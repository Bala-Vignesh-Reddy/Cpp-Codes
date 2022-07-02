#include<iostream>
using namespace std;
/* Number pattern que
if input is 4 then output is 
1
2 3 
3 4 5  
4 5 6 7
*/

int main() {
    
    int n;
    cin >> n;

// While loop code
  
    int row = 1;
    int val = 1;
    while(row <= n){
        int col = 1;
        val = row; // This is important for this pattern
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
        val = row;
        for(int col = 1; col <= row; col++){
            cout << val << " ";
            val++;
        }
        cout << endl;
    }

}
