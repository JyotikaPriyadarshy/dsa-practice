// The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

// Input: A[] = [-7, 1, 5, 2, -4, 3, 0]
// Output: 3
// 3 is an equilibrium index, because:
// A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

// Input:
// n = 5
// A[] = [1,3,5,2,2]
// Output: 2
// Explanation: equilibrium point is at position 2 as elements before it (1+3) = elements after it (2+2).

// Return -1 if no such point exists.

// -7  1  5  2  -4  3  0
//  i
// j


/*#include<iostream>
using namespace std;

int main()
{
    int a[]= {-7, 1, 5, 2, -4, 3, 0};
    int n=sizeof(a)/sizeof(a[0]);
    int lsum=0, rsum=0;
    int i, j, k;
    for(i=0;i<n;i++)
    {
        for(j=0; j<i; j++)
        {
            lsum+=a[j];
        }
        for(k=i+1; k<n; k++)
        {
            rsum+=a[k];
        }
        if(lsum==rsum)
        {
            cout<<i;
        }
    }
    cout<<-1;
    return 0;
}*/
#include<iostream>
using namespace std;
int equilibrium_index(int a[], int n)
{
    int lsum, rsum;
    int i, j;
    for(i=0;i<n;i++)
    {
        lsum=0;
        for(j=0; j<i; j++)
        {
            lsum+=a[j];
        }
        rsum=0;
        for(j=i+1; j<n; j++)
        {
            rsum+=a[j];
        }
        if(lsum==rsum)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[]= {-7, 1, 5, 2, -4, 3, 0};
    int n=sizeof(a)/sizeof(a[0]);
    cout<< equilibrium_index(a, n);
    return 0;
}