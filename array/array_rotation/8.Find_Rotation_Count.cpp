#include<iostream>
using namespace std;

int countRotation(int a[], int n)
{
	int min = a[0];
	int min_index = 0;
	for(int i=1; i<n; i++)
	{
		if(min > a[i])
		    return (i);
		min = a[i];
	}
}

int main()
{
	int a[] = {7,9,11,12,5};
	int n = sizeof(a)/sizeof(int);
	cout<< countRotation(a,n) << endl;
	return 0;
}
