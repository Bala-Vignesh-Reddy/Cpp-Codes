#include<iostream>
using namespace std;

//Output will be 1 if it is even
// 0 if it is odd number
 bool isEven(){
    int a;
    if(a % 2 == 0){
        return 1;
    }
    return 0;
    
 }


int main() {
    int num;
    cin >> num;

    if(isEven() == 1){
        cout << "The Number is Even." << endl;
    }
    else{
        cout << "The Number is Odd." << endl;
    }
    return 0;   
}