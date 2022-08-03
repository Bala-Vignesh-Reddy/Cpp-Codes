#include<iostream>
using namespace std;

int fibonnaci(int n){
    int ans = 0 ;
    for(int i = 1; i <= n; i++){
        ans = ans + i;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << "Fibonnaci Series is: " << fibonnaci(n) << endl;
}