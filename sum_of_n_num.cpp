#include<iostream>
using namespace std;

int main(){

/*    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while(i <= n){
        sum = sum + i;
        i = i + 1; 
    } 
    cout << "Sum of Number from 1 to " << n << " is: " << sum << endl;    
    return 0;*/
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum+=i;
    }
    cout << "Sum of 1 to n Number = " << sum << endl;

}