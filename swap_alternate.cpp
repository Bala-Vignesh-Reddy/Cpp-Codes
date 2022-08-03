#include<iostream>
using namespace std;

//This program is to Swap the alternate element in the array


void printArray(int arr[], int n){
	cout << "Printing the Array" << endl;
	for(int i = 0; i < n; i++){
		cout << arr[i] << " " ;
	}
	cout << "Printing Done " << endl;
}

void swapAlternate(int arr[], int n){
	//int start = 0;  
	for(int i = 0; i < n; i += 2){
		if(i + 1 < n){
			
			//swap(arr[i], arr[i+1]);

			//Another method to use without swap function
			int temp;
			temp = arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = temp;
			
		}
	}
}

int main(){
	
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int brr[5] = {11, 14 ,15, 18, 19};

	swapAlternate(arr, 6);
	swapAlternate(brr, 5);

	printArray(arr, 6);
	printArray(brr, 5);

}
