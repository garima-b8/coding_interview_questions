#include<iostream>
using namespace std;

void rotate(int *arr,size_t n)
{
	int temp = *(arr+n-1);
	int i;
	for(i=n-1; i>0; i--)
		*(arr+i) = *(arr+i-1);

	*(arr+i) = temp;
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
    rotate(arr,n); 
    printArray(arr, n); 
    cout<<endl;
  
    return 0; 
} 

		

