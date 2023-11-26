// Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array
//  in a zig-zag fashion so that the converted array should be in the below form: 

// arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

// NOTE: If your transformation is correct, the output will be 1 else the output will be 0. 

// Input:
// N = 7
// Arr[] = {4, 3, 7, 8, 6, 2, 1}
// Output: 3 7 4 8 2 6 1
// Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1

// Input:
// N = 4
// Arr[] = {1, 4, 3, 2}
// Output: 1 4 2 3
// Explanation: 1 < 4 > 2 < 3
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function zigZag() which takes the array of integers arr and n as parameters and returns void. You need to modify the array itself.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

//Solution:
// Create a bool variable flag and set it to true
// Traverse the array from index 0 to N-1 
// If the value of flag is true then check if  arr[i] < arr[i+1] or not , if not then swap
// Flip the value of flag
// If the value of flag is false then check if  arr[i] > arr[i+1] or not , if not then swap
// Print the final array.

#include <iostream>
using namespace std;

void zigZag(int a[], int n)
{
    int temp;
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        if(flag)             //< expected
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        else
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        flag=!flag;
    }
        
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   zigZag(a, n);
   for (int i = 0; i < n; i++)
        cout << a[i] << " ";
return 0;
}