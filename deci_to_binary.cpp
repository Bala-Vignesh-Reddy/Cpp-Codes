#include<iostream>
#include<math.h>
using namespace std;

/*For printig the digits is same flow then the formula is
ans = (ans * 10 ) + digit

For printing the digits in reverse flow is
ans = (digit * 10 ** i) + ans
*/


int main() {
    int n;
    cin >> n;
    
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Answer " << ans << endl;

/*
    for(int i = 0; n != 0; i++){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
    }*/
}