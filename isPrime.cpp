#include<iostream>
using namespace std;

//1 means prime
// 0 means not prime
bool isPrime(int n){
    for (int i = 2; i < n; i++){
        //divide hogaya to not a prime number
        if(n % i == 0){
            return 0;
        }
    }    
    return 1;
}

int main() {
    int num;
    cin >> num;
    if(isPrime(num)){
        cout << "It is a Prime number.";
    }
    else{
        cout << "It is not a Prime Number.";
    }
    return 0;
}
