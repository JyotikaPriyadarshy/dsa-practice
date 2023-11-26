// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

// Input:
// N = 10
// A[] = {6,1,2,8,3,4,7,10,5}

#include<iostream>
using namespace std;
// bool search_in_array(int arr[], int n, int num)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] == num)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

int main()
{
    int N,total_sum, sum=0, miss_no;
    cin>>N;
    int a[N-1];
    for(int i=0; i<N-1; i++)
    {
        cin>>a[i];
    }
     // Range 1 to N
    //((n(n+1))/2)-for sum= miss_no.
    total_sum=(N*(N+1))/2;
    for(int i=0; i<N-1; i++)
    {
        sum+=a[i];
    }
    miss_no=total_sum-sum;
    cout<<miss_no;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (search_in_array(arr, n, i))
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << "Missing Number = " << i;
    //     }
    // }
    return 0;
}

