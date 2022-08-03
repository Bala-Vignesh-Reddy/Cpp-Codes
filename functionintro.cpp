#include<iostream>
using namespace std;

/*int main(){
	//pow (a, b) Normal Code written by normal people
	int a, b;
	cin >> a >> b;
	
	int ans = 1;
	for (int i = 1; i <= b; i++){
		ans = ans * a;
	}
	cout << ans; 
}*/
// Code Written by Thug people

// IN the function name in the braces it is not neccessary 
// to assign value we can also assign inside the function also
int power(){
	int a, b;
	cin >> a >> b;
	int ans = 1;
	for(int i = 1; i <= b; i++){
		ans = ans * a;
	}
	return ans;
}

int main() {
	int answer = power();
	cout << "Answer is : " << answer << endl;	
	return 0;
}
