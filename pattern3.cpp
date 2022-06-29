#include<iostream>
using namespace std;
/*Number pattern Question
1234
1234
1234
1234*/

int main() {
    int n;
    cin >> n;
    
//    While loop code
    int row = 1;
    while(row <= n){
        int col = 1;
        while (col <= n){
            cout << col ;
            col++;
        }
        cout << endl;
        row++;
    }

    //For loop code
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n; col++){
            cout << col;
        }
        cout << endl;
    }   
}