#include<iostream>
using namespace std;


bool search(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}

int main() {
    
    int num[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    //whether 1 is present in it or not?
    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

    bool found = search(num, 10 , key);
    if(found){
        cout << "The element is present." << endl;
    }
    else{cout << "Not Present" << endl;}
    return 0;
}