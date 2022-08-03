#include<iostream>
#include<climits>
using namespace std;

//This Program is for Reversing the number
//LeetCode Question
//if it exceeds the limit then the code should written 0 as output
int main(){
	int num;
	cin >> num;
	int ans = 0;
	while(num != 0){
		int digit = num % 10;

		if ( (ans > INT_MAX/10) || (ans < INT_MIN/10) ){
			return 0;
		}

		ans = ans * 10 + digit;
		num = num / 10;
	}
	cout << ans << endl;
	return 0;
	
}
