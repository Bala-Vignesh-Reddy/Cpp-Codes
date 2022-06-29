#include<iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (char(a)>=68 && char(a)<=90){
        cout << "this is a uppercase alphabet" << endl;
        
    }

    
    else if(char(a)>=97 && char(a)<=122){
        cout << "this a lowecase alphabet" << endl;

    }
    else if(char(a)>=49 && char(a)<=57){
        cout << "this is a number" << endl;

    }
}
