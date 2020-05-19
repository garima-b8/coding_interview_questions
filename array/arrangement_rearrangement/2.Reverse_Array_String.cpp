/*
* Write a program to reverse an array or string
* Given an array (or string), the task is to reverse the array/string.
*
* Examples :
*
* Input  : arr[] = {1, 2, 3}
* Output : arr[] = {3, 2, 1}
*
* Input :  arr[] = {4, 5, 1, 2}
* Output : arr[] = {2, 1, 5, 4}
*/
#include<iostream>
using namespace std;

void reverseArray(int a[], int n)
{
	int l = 0;
	int h = n-1;

	if(l==h)
	    return;

	while(l<h)
	{
	    //swap
	    int temp = a[l];
	    a[l] = a[h];
	    a[h] = temp;
	    l++;
	    h--;
	}
}

void printArray(int a[], int n)
{
	for(int i=0; i<n; i++)
	    cout<< a[i] << "  ";

	cout<< endl;
}

int main()
{
	int arr[] = {4,5,1,2,7};
	int size = sizeof(arr)/sizeof(int);
	printArray(arr,size);
	reverseArray(arr,size);
	printArray(arr,size);
}
