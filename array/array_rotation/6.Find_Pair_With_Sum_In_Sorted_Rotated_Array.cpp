#include <bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(int a[], int size, int sum)
{
	for(int i=0; i<size; i++){
	    if(a[i] > a[i+1])
		break;
	}

	int l = (i+1)%n;
	int r = i;

	while(l < r)
	{
	    if((a[l]+a[r]) == sum)
		return 1;
	    if((a[l]+a[r]) < sum)
		l = (i+1)%n;
	    else
		r = (n+r-1)%n;
	}

	return 0;
}

int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10}; 
    int sum = 16; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    if (pairInSortedRotated(arr, n, sum)) 
        cout << "Array has two elements with sum 16"; 
    else
        cout << "Array doesn't have two elements with sum 16 "; 
  
    return 0;
}
