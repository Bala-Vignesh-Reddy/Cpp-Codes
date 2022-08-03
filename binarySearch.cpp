#include<iostream>
using namespace std;

/*in binary search the steps to be followed is
 1. elements should be monotonic function
 2. find the mid element
 3. compare mid element and the key
 4. if equal then written the index other wise 
 5. continue the steps till you find out
 6. if the mid element is not euqal to the key then choose the part i.e,
    right side or left side then repeat the steps
 */

int binarySearch(int arr[], int size, int key){
    
    int start = 0;
    int end = size - 1;

    //int mid = (start + end) / 2; // this can create problem for big integer so for that we should use 
    int mid = start + (end - start) / 2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        // go to right side
        if(key > arr[mid]){
            start = start + 1;
        }
        else{
            end = mid - 1;
        }
        //int mid = (start + end) / 2; // this can create problem for big integer so for that we should use 
        mid = start + (end - start) / 2;
    } 
    return -1;
}

int main() {
    
    int even[6] = {2, 4, 6, 8, 12, 18}; 
    int odd[5] = {3, 8, 11, 14, 16};

    int evenindex = binarySearch(even, 6, 12);
    cout << "Index of 12 is " << evenindex << endl;

    int oddindex = binarySearch(odd, 5, 3);
    cout << "Index of 3 is " << oddindex << endl; 
}