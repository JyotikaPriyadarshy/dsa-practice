// An Arithmetic array is an array that contains at least two integers and the differences between
// consecutive integers are equal. For example, [9,10], [3,3,3], and [9,7,5,3] are arithmetic arrays,
// while [1,3,3,7], [2,1,2], and [1,2,4] are not arithmetic arrays.

// In a given array of N non-negative integers, The i-th integer of the array is Ai. Determine
// the length of the longest contiguous arithmetic subarray.

// Approach: Loop over the array and find the answer.
// Maintain the following variables:
//  1. Previous Common Difference (pd)
//  2. Current Arithmetic Subarray length (curr)
//  3. Max Arithmetic Subarray length (ans)

//        3   5    7    9    13    17   19    5
// pd        2    2   2     4     4    2   -14
// curr           4            2       1     1

#include <iostream>
using namespace std;

int max_arith_arr(int a[], int n)
{
    int pd, curr = 2, ans = 2;
    pd = a[1] - a[0];
    for (int i = 2; i < n; i++)
    {
        if ((a[i] - a[i - 1]) == pd)
        {
            curr++;
            if (curr > ans)
            {
                ans = curr;
            }
            //continue;
        }
        else
        {
            pd = a[i] - a[i - 1];
            curr = 2;
        }
    }
    return ans;
}

int main()
{
    cout << "Enter the no of Elements: ";
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Length of the longest arithmetic subarray: " << max_arith_arr(a, n);
    return 0;
}