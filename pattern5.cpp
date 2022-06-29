
#include<iostream>
using namespace std;

/* Star pattern que
if input is 4 then output is 
*
* *
* * *
* * * *
*/
int main() {
    int n;
    cin >> n;
    int row = 1;

// While loop code


    while(row <= n){
        int col = 1;
        while (col <= row){
            cout << "*" << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    
   //For loop Code
    
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= row; col++){
            cout << "*" << " ";
        }
        cout << endl;
    }

}
