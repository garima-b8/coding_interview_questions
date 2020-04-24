#include <bits/stdc++.h>
using namespace std;

int hasArrayTwoCandidates(int a[], int size, int sum)
{
	int l,h;
	sort(a,a+size);

	l = 0;
	h = size -1;
	while(l < h)
	{
	    if((a[l] + a[h]) == sum)
		return 1;
	    else if((a[l] + a[h]) < sum)
		l++;
	    else
		h--;
	}

	return 0;
}

int main()
{
	int arr[] = {1, 4, 45, 6, 10, -8};
	int n = sizeof(arr)/sizeof(int);

	int sum = 16;

	if(hasArrayTwoCandidates(arr,n,sum))
	    cout<< "Array has two elements with given sum" << endl;
	else
	    cout<< "Array doesn't have two elements with given sum" << endl;
}
