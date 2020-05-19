/*
* Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
* Given an array, only rotation operation is allowed on array. We can rotate the array as many times as we want. Return the maximum possbile of * * summati* on of i*arr[i].
* Examples :
*
*Input: arr[] = {1, 20, 2, 10}
*Output: 72
*We can 72 by rotating array twice.
*{2, 10, 1, 20}
*20*3 + 1*2 + 10*1 + 2*0 = 72
*
*Input: arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
*Output: 330
*We can 330 by rotating array 9 times.
*{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
* 0*1 + 1*2 + 2*3 ... 9*10 = 330
* 
*/
#include<iostream>
using namespace std;

// Returns max possible value of i*arr[i] 
int maxSum(int arr[], int n) 
{ 
    // Find array sum and i*arr[i] with no rotation 
    int arrSum = 0;  // Stores sum of arr[i] 
    int currVal = 0;  // Stores sum of i*arr[i] 
    for (int i=0; i<n; i++) 
    { 
        arrSum = arrSum + arr[i]; 
        currVal = currVal+(i*arr[i]); 
    } 
  
    // Initialize result as 0 rotation sum 
    int maxVal = currVal; 
  
    // Try all rotations one by one and find 
    // the maximum rotation sum. 
    for (int j=1; j<n; j++) 
    { 
        currVal = currVal + arrSum-n*arr[n-j]; 
        if (currVal > maxVal) 
            maxVal = currVal; 
    } 
  
    // Return result 
    return maxVal; 
} 

int main()
{
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "\nMax sum is " << maxSum(arr, n); 
    return 0;
}
