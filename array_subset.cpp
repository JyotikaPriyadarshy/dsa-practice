// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m.
// Task is to check whether a2[] is a subset of a1[] or not. 
// Both the arrays can be sorted or unsorted. There can be duplicate elements.

// Input:
// a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
// a2[] = {11, 3, 7, 1, 7}
// Output:
// Yes
// Explanation:
// a2[] is a subset of a1[]

// Input:
// a1[] = {10, 5, 2, 23, 19}
// a2[] = {19, 5, 3}
// Output:
// No
// Explanation:
// a2[] is not a subset of a1[]

#include <iostream>
using namespace std;

bool isSubset(int a1[], int a2[], int n, int m) 
{
    int i,j;
    for(i=0; i<m; i++)        // Check each element of a2 array if it is present in a or not   //a2
    {
        for(j=0; j<n; j++)           //a1
        {
            if(a2[i]==a1[j])      
            {
                break;
            }
            
        }
        if(j==n)                   
            {
                return 0;
            }
    }
    return 1;

}

int main()
{
   int n, m;
   cin>>n>>m;
   int a1[n], a2[m];
   for(int i=0; i<n; i++)
   {
    cin>>a1[i];
   }
    for(int i=0; i<m; i++)
   {
    cin>>a2[i];
   }
   if(isSubset(a1,a2,n,m))
   {
    cout<<"Yes";       //a2 is subset of a1
   }
   else
   {
    cout<<"No";        //a2 is not a subset of a1
   }
return 0;
}