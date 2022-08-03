#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
    
    cout << "Printing the array" << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " << endl;
    }
    cout << "Printing Done" << endl;

}

int main() {

    //declraing array
    int number[15]; // this array has garbage value

    //intialising the array
    int num[3] = {1, 2, 3};

    //accessing the array
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;

    //printing the array can be done using loop
   /* int n = 3;
    for (int i = 0; i < n; i++){
        cout << num[i] << " ";
    }
*/
    PrintArray(num, 3);
   
    /*/intialising whole array with one variable
    int all[10] = {1};
*/
}



