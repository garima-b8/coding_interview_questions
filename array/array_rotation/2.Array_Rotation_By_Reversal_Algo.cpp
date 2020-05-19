/*
* Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements by using reversal algo
* Input :  arr[] = [1, 2, 3, 4, 5, 6, 7]
*         d = 2
* Output : arr[] = [3, 4, 5, 6, 7, 1, 2] 
*
*/
#include<iostream>
using namespace std;

void reverse(int *arr,size_t start, size_t end)
{
	while(start<end){
		*(arr+start) ^= *(arr+end);
		*(arr+end) ^= *(arr+start);
		*(arr+start) ^= *(arr+end);
		start++;
		end--;
	}	
}

void leftRotate(int *arr, size_t d, size_t n)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
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
    leftRotate(arr, 6, n); 
    printArray(arr, n); 
    cout<<endl;
  
    return 0; 
} 

		

