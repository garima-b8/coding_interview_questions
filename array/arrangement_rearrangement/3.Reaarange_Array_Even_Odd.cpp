#include<bits/stdc++.h>
using namespace std;

void rearrangeArr(int a[], int n)
{
	int evenpos = n/2;
	int oddpos = n-evenpos;

	int tmpArray[n];

	for(int i=0; i<n; i++)
		tmpArray[i] = a[i];

	sort(tmpArray,tmpArray+n);

	int j = oddpos - 1;

	// fill up odd position in original 
    	// array 
    	for (int i = 0; i < n; i += 2) { 
        	arr[i] = tempArr[j]; 
        	j--; 
    	} 
  
    	j = oddPos; 
  
    	// fill up even positions in original 
    	// array 
    	for (int i = 1; i < n; i += 2) { 
        	arr[i] = tempArr[j]; 
        	j++; 
    	} 
  
    	// display array 
    	for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    	int size = sizeof(arr) / sizeof(arr[0]); 
    	rearrangeArr(arr, size); 
    	return 0;
}
