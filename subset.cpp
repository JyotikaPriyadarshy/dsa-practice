// A subarray is a contiguous part of array. An array that is inside another array. For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays.
// The subarrays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4).

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 2 
// 2 3 
// 2 3 4 
// 3 
// 3 4 
// 4

#include<iostream>
using namespace std;

void print_subarrays(int a[], int n)
{
   for(int i=0; i<n; i++)
   {
    for(int j=i; j<n; j++)
    {
        for(int k=i; k<=j; k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
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
    print_subarrays(a,n);
    return 0;
}

// fkjfjhf
