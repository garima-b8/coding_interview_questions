/*
* Search an element in a sorted and rotated array
* Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
*         key = 3
*Output : Found at index 8
*
*Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
*         key = 30
*Output : Not found
*
*Input : arr[] = {30, 40, 50, 10, 20}
*        key = 10   
*Output : Found at index 3
*/
#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
	if(low > high)
	    return -1;

	int mid = low + (high-low)/2;

	if(key == arr[mid])
	    return mid;

	if(key > arr[mid])
	    return binarySearch(arr,mid+1,high,key);

	return binarySearch(arr,low,mid-1,key);
}

int findPivot(int a[], int low, int high)
{
	if(low > high) return -1;
	if(low == high) return low;

	int mid = low + (high -low)/2;

	if((mid > low) && (a[mid] < a[mid-1]))
		return mid-1;
	if((mid < high) && (a[mid] > a[mid+1]))
		return mid;

	if(a[low] >= a[mid])
	    return findPivot(a, low, mid-1);
	return findPivot(a, mid+1, high);
}

int pivotedBinarySearch(int arr[], int n, int key)
{
	int pivot = findPivot(arr, 0, n-1);

	if(pivot == -1)
	    binarySearch(arr, 0, n-1, key);

	if(arr[pivot] == key)
	    return pivot;

	if(arr[0] <= key)
	    return binarySearch(arr, 0, pivot-1, key);

	return binarySearch(arr, pivot+1, n-1, key);
}

int main()
{
	int arr[] = {5,6,7,8,9,10,1,2,3};
	int n = sizeof(arr)/sizeof(int);
	int key = 3;
	
	cout<< "Index of the element is: " << pivotedBinarySearch(arr,n,key) << endl;
}
