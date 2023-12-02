// An Arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9,10], [3,3,3], and [9,7,5,3] are arithmetic arrays, while [1,3,3,7], [2,1,2], and [1,2,4] are not arithmetic arrays.

// In a given array of N non-negative integers, The i-th integer of the array is Ai. Determine the length of the longest contiguous arithmetic subarray.

// Approach: Loop over the array and find the answer.
// Maintain the following variables:
//  1. Previous Common Difference (pd)
//  2. Current Arithmetic Subarray length (curr)
//  3. Max Arithmetic Subarray length (ans)

//    3   5   7   9   13    17  19  5

#include <iostream>
using namespace std;

int main()
{
    cout << "No of Elements: ";
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
     cin>>a[i];
    }
    // Take curr and ans value as 2 by default denoting the first two elements of the array as the longest arithmetic subarray
    int pd, curr = 2, ans = 2;
    // Initialize pd value as the difference between first and second element
    pd = a[1] - a[0];
    for (int i = 2; i < n; i++)
    {
        // If the next pd is same as previous pd, increase curr by 1 and continue the loop  
        if ((a[i] - a[i - 1]) == pd)
        {
            curr++;
            // If curr exceeds ans, set ans equal to curr
            if (curr > ans)
                ans = curr;
            continue;
        }
        // If the next pd is not equal to previous pd, set the pd value to new pd and set curr value as 2
        pd = a[i] - a[i - 1];
        curr = 2;
    }

    cout << "Length of the longest arithmetic subarray: " << ans;
    return 0;
}
