// Given an unsorted array arr[N], find a continuous first subarray which adds to a given number S.

// Example: 1   5   3   4   3   5   6   (N = 7)
// S = 18
// Output: 4   3   5   6

#include <iostream>
using namespace std;


int main()
{
    int n,reqsum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin>>reqsum;
    int sum,i,j;
    bool flag=0;
    for(i=0;i<n;i++)
    {
        sum=a[i];
        for(j=i+1; sum <reqsum && j<n; j++)
        {
            sum+=a[j]; 
        }             
        if(sum==reqsum)
        {
            flag=1;
            break;
        }
    }
    // cout<<flag;
    // cout<<i<<j;
    if(flag== 1)
    {
        for(int k=i; k<=j-1; k++)
        {
            cout<<a[k]<<"\t";
        }
    }
    
    return 0;
}