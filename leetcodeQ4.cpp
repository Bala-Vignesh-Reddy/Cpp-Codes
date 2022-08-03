#include<iostream>
using namespace std;

//Complement of base integer 10
//for eg for 5 its binary form is 101 but the output should be 010 
//i.e, swap 1 to 0 and 0 to 1
  
int main(){
    int n;
    cin >> n;
    int m = n;
    int mask = 0;
    //edge case
    if(n == 0){
        cout << 1 << endl;;
    }

    while(m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    
    cout << ans << endl;
}




