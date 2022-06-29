#include<iostream>
using namespace std;

//Que: Subtract the Product and Sum of digits of an integer.
int main() {
    int n;
    cin >> n;

    int p = 1;
    int s = 0;
    while (n != 0){
        int d = n % 10;
        p = p * d;
        s = s + d;
            
        n = n/10;
    }
    int ans = p - s;
    cout << ans;
}