#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n){

        int val = i;
        int j = i;
        
        while (j <= i * 2){
            cout << j << " ";
//            cout << count; THIS IS TO PRINT 1 23 45
//            cout << i + 1;
//            val = val + 1;
//            cout << j;
 //           count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    } 
    return 0;
}