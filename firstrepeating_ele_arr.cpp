// Given an array arr[] of size N. The task is to find the first repeating element in the 
// array of integers, i.e., an element that occurs more than once and whose index of
//  first occurrence is smallest.
// Example:     1 5 3 4 3 5 6
// Output:      Index = 1

#include <iostream>
using namespace std;

int first_repeating_ele(int a[], int n)
{
  
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                return i;
            }
        }   
    }
    return -1;
}

int main()
{
   int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<first_repeating_ele(a,n);
return 0;
}