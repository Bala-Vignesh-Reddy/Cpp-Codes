#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int i = 1;
    cout << "Printing Count from 1 to n " << endl;
    do {
        cout << i << endl;
        i++;
    }
    while(i <= n);

    return 0;
}