#include <iostream>
// #include <>

using namespace std;



// l = left index
// r = right index
// x = target
int binarySearch(int arr[], int l, int r, int x){


	if(r >= l){
		int mid = l + ((r - l) / 2);

		if(arr[mid] == x) return mid;

		/*if element is smaller than mid, then
		it can only be in the leff*/
		if(arr[mid] > x)
			return binarySearch(arr, l, mid-1, x);

		/*otherwise it is at the right part of the array*/
		return binarySearch(arr, mid+1, r, x);

	}

	/* if the element is not present in the array*/
	return -1;
} 


int main(){

	int arr[] = { 2, 3, 4, 10, 40, 50, 60, 70 ,80, 90};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result << endl;

	return 0;
}





