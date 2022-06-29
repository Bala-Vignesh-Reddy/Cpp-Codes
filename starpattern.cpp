#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    
    while (i <= n){
        int j = 1;
        
        while (j <= i ){
           // cout << "*";    // FOR PRINTING TRIANGLE PATTERN
            cout << i;      // FOR PRINTING NUMBER PATTERN 1 22 333 4444 ...
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}