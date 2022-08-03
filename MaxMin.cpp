#include<iostream>
#include<climits>
using namespace std;

int getMax(int num[], int n){
    
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){

        //Here predefined function can be used 
        //variable_name = max(variable_name, array_name[i])

        maxi = max(maxi, num[i]);

        /*if(num[i] > max){
            max = num[i];
        }*/
    }
    //returning max value
    return maxi;
}

int getmin(int num[], int n){
    
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){

        mini = min(mini, num[i]);
        /*
        if(num[i] < min){
            mini = num[i];
        }*/
    }
    //returning min value
    return mini;
}


int main() {

    int size;
    cout << "Enter the number of elements :";
    cin >> size;
    int num[4];

    //Taking input
    for(int i = 0; i < size; i++){
        cout <<  "Enter the numbers: ";
        cin >>num[i];
    }
    cout << "Maximum Value is : " << getMax(num, size) << endl;
    cout << "Minimum Value is : " << getmin(num, size) << endl;
    
    
    return 0;
}