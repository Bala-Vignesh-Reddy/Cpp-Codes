#include<iostream>
#include<math.h>
using namespace std;

/*
If we want the digit(last term) then we will modulo it by 10
i.e (n % 10) and (n / 10) n is the number

for bit we will us & and >> 
*/


int main() {
    int n;
    cin >> n;
    int i =0, ans = 0;

    while (n != 0){
        int digit = n % 10;

        if (digit == 1){
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;    
}