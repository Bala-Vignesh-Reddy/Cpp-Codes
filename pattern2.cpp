#include<iostream>
using namespace std;
/*Pattern of this question is
if input is 3
then output is 
111
222
333
*/
int main() {
    int n;
    cin >> n;
    int i = 1;
    
    while (i <=n ){

        int j = 1;
        while (j <= n){
            cout << i;
            j = j + 1;
        }
        cout << endl;
    i = i + 1;
    }
    return 0;
}
