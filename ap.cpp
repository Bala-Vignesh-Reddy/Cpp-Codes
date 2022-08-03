#include<iostream>
using namespace std;

/*AP question in which it is given that
ap = 3 * n + 7
then the n'th term will be the output */

int ap(int n){
    int ans = (3 * n + 7);
    return ans;
}

int main() {
    int n;
    cin >> n;
    int ans = ap(n);
    cout << "The n'th term of AP is : " << ap(n) << endl;
    return 0;
    
}