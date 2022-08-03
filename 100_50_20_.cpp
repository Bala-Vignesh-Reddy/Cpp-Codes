#include<iostream>
using namespace std;

// THIS QUESTION TOOK ME MORE THEN 2 hr solve :( but sucessfull in sloving :)

int main(){

	int num;
	cout << "Enter your number : " << endl;
	cin >> num;	
	int n100, n50, n20, n1;
	n100 = n50 = n20 = n1 = 0;
	int sum = 0;
	
	switch(num >= 100){
		case 1: 
		// IF the given number is divisible by 100 then it will written the reaminder
			int a1 = num / 100;
			n100 = a1;
			num = num - n100 * 100;
		break;
	}
	switch(num >= 50){
		case 1:
			int a1 = num / 50;
			n50 = a1;
			num = num - n50 * 50;
			cout << num ;
		break;
	}
	switch(num >= 20){
		case 1 :
			int a1 = num / 20;
			n20 = a1;
			num = num - n20 * 20;
		break;
	}
	switch(num >= 1){
		case 1:
			int a1 = num / 1;
			n1 = a1;
			num = num - n1 * 1;
		break;
	}
	cout << endl;
	cout << "100's : " << n100 << endl;
	cout << "50's : " << n50 << endl;
	cout << "20's : " << n20 << endl;
	cout << "1's : " << n1 << endl;
	

}
