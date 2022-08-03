#include<iostream>
using namespace std;

int sum_array(int arr[],int n){
    int sum1 = 0;
    for(int i = 0; i < n; i++){
        sum1 = sum1 + arr[i];
    }
    return sum1;
}


int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    int num[100];
    for(int i = 0; i < size; i++){
        //cout << "Enter the number: ";
        cin >> num[i];
    }

    //cout << "Sum of all elements in array is: " << sum_array(num, size) << endl; 
    cout << " " << endl;
    cout << sum_array(num, size) << endl;



}
