#include<iostream>
#include<math.h>
using namespace std;

//Given an integer return true if the number is power of 2 otherwise false
bool powerof2(int n){
	for(int i = 0; i <= 30; i++){
		int ans = pow(2, i);
		if(ans == n){
			return true;
		}
	}
	return false;
}
int main(){
	int n;	
	cin >> n;
	int ans = powerof2(n);
	if (ans == 1){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
}
