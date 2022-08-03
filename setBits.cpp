#include<iostream>
using namespace std;

int setBits(int n){
	if(n == 0){
		return 0;
	}
	else{
		return (n & 1) + setBits(n >> 1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << setBits(n);
	return 0;
}
