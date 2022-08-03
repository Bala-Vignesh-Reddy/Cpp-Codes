#include<iostream>
using namespace std;

int peakIndexInMountainArray (int arr[], int n){
	int ans = 0;
	int start = 0, end = n - 1;
	int mid = start + (end - start)/2;

	while(start < end){
		if (arr[mid] < arr[mid + 1]){
			start = mid + 1;
		}
		else{
			end = mid;
		}
		mid = start + (end - start)/2;
	}
	//return start; This return the peak value index
	ans = arr[start];// this return the peak value from the array i.e, mountain array
	return ans;
}

int main(){

	int arr[4] = {0, 9, 5, 2};
	cout << peakIndexInMountainArray (arr, 4);
}
