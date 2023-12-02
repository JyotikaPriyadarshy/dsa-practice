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

// No of Elements: 6
// Enter elements: 8 4 1 5 9 2
// 8               (Sum = 8)
// 8 4             (Sum = 12)
// 8 4 1           (Sum = 13)
// 8 4 1 5                 (Sum = 18)
// 8 4 1 5 9               (Sum = 27)
// 8 4 1 5 9 2             (Sum = 29)
// 4               (Sum = 4)
// 4 1             (Sum = 5)
// 4 1 5           (Sum = 10)
// 4 1 5 9                 (Sum = 19)
// 4 1 5 9 2               (Sum = 21)
// 1               (Sum = 1)
// 1 5             (Sum = 6)
// 1 5 9           (Sum = 15)
// 1 5 9 2                 (Sum = 17)
// 5               (Sum = 5)
// 5 9             (Sum = 14)
// 5 9 2           (Sum = 16)
// 9               (Sum = 9)
// 9 2             (Sum = 11)
// 2               (Sum = 2)

#include<iostream>
using namespace std;

void print_subarrays(int a[], int n)
{
   for(int i=0; i<n; i++)
   {
    int sum = 0;
    for(int j=i; j<n; j++)
    {
        for(int k=i; k<=j; k++)
        {
            cout<<a[k]<<" ";
            sum += a[k];
            
        }
        cout << "\t\t(Sum = " << sum << ")";
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

