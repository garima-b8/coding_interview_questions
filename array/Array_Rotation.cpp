#include<iostream>
using namespace std;

void leftrotatebyOne(int *arr,size_t n)
{
	int temp = *(arr+0);
	for(int i=0; i<(n-1); i++)
		*(arr+i) = *(arr+i+1);

	*(arr+i) = temp;
}

void leftRotate(int *arr, int d, size_t n)
{
	for(int i=0;i<d;i++)
		leftrotatebyOne(arr,n);
}

void printArray(int *arr,size_t n)
{
	for(int i=0;i<n;i++)
		cout<< *(arr+i) << " ";
}

int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    //Original Array
    printArray(arr,n);

    cout<<endl;
	
    // Function calling 
    leftRotate(arr, 2, n); 
    printArray(arr, n); 
    cout<<endl;
  
    return 0; 
} 

		

