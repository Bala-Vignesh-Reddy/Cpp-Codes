#include<iostream>
using namespace std;

int dummy(int n){

	n -= 5;
	//	n = n / 2;
	//n++;
	//cout << "n is " << n << endl;
	return n;
}

int main() {
	
	int n;
	cin >> n;
	dummy(n);

	cout << "NUmber n is " << n << endl;
	return 0;
}
