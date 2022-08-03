#include<iostream>
using namespace std;

/*switch can be nested also using switch in case condition
 any datatype can be also used
 
 in infinte loop if we will use switch case then
 break statement can not be used we have to use the 
 exit() fucntion 

 continue statement can not be used in switch statement

 in switch statement can write also num
 */

int main() {
    
    int num = 2;

    switch (num) {

        case 1: cout << "First" << endl;
		break;

	case 2: cout << "Second" << endl;
		break;

	default: cout << "It is default case" << endl;
    }
    cout << endl;
}
