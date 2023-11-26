// Given an array "a[]" of size "n". For every i from 0 to (n-1), output max(a[0], a[1],...,a[i])

// Example:

//                8   4   1   5   9   2
//   Max till i:  8   8   8   8   9   9

#include<iostream>
using namespace std;

void max_till_i(int a[], int n)
{
   
    int max_i = a[0];                                                                                                 //max_so_far

    for (int i = 0; i < n; i++) 
    {
        if (a[i] > max_i) {
            max_i= a[i];
        }
        cout << max_i<< " ";
    }
    cout<<endl;
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
    max_till_i(a,n);

    return 0;
}
