#include<iostream>
using namespace std;

//function signature
void PrintCounting(int n){
    //function body
    for (int i = 1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
}   

int main() {
    int n;
    cin >> n;

    //function call
    PrintCounting(n);
    return 0;
}


