#include<iostream>
using namespace std;

int main() {
	
	int a, b;
	cout << "Enter your number : " << endl;
	cin >> a >> b;
	
	char op;
	cout << "Enter your operator : " << endl;
	cin >> op;

	switch(op) {

		case '+' :
			cout << a << " + " << b << " = "  << a + b << endl;
			break;

		case '*' :
			cout << a << " * " << b << " = "  << a * b << endl;
			break;

		case '/' :
			cout << a << " / " << b << " = "  << a / b << endl;
			break;

		case '-' :
			cout << a << " - " << b << " = "  << a - b << endl;
			break;

		case '%' :
			cout << a << " % " << b << " = "  << a % b << endl;
			break;

		default :
			cout << "PLease enter a valid operator " << endl;
	}
	
}
