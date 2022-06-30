#include<iostream>
using namespace std;
/* pattern of this question is
if input is 3
***
***
***
*/
int main() {

    int num;
    cin >> num;

    int row = 1;
    while(row<=num){
        int col = 1;
        while (col <= num){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    
    for (row; row <= num; row++){
        for(int col = 1; col <= num; col++){
            cout << "*";
        }
        cout << endl;
    }
    
}