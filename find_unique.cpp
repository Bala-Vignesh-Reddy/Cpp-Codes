#include<iostream>
using namespace std;

//this program is to find the unique element,
//which is not repeated in the array

int findunique(int arr[], int size){
	int ans = 0;
	for(int i = 0; i < size; i++){
		ans = ans * arr[i];
	}
	cout << ans;
	return ans;
}

int main() {
	int arr[5] = {1, 2, 1, 3, 2};

	//cout << findunique(arr, 5);
	findunique(arr, 5);

}
