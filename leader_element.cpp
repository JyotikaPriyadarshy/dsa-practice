// Given an array A of positive integers. Your task is to find the leaders in the array.
// An element of array is leader if it is greater than or equal to all the elements to its right side.
// The rightmost element is always a leader.

// Input:
// n = 6
// A[] = {16,17,4,3,5,2}
// Output: 17 5 2
// Explanation: The first leader is 17
// as it is greater than all the elements to its right. 
// Similarly, the next leader is 5.
// The right most element is always a leader so it is also included.

#include <iostream>
using namespace std;

int main()
{
   int n, a[n],i, j;
   cin>>n;
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   for(int i=0; i<n; i++)
   {
    for(int j=i+1; j<n; j++)
    {
        if(a[i]<a[j])
        {
          break;  
        }
        cout<<a[i];
    }
    
    if(i==n-1)
    {
      cout<<a[i];                          
    }
   }
return 0;
}

// #include <iostream>
// using namespace std;

// bool check_elements(int arr[], int size, int i)
// {
//     for (int j = i + 1; j < size; j++)
//     {
//         if (arr[j] > arr[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int size;
//     cout << "Size of Array: ";
//     cin >> size;
//     int arr[size];
//     cout << "Enter elements:" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl
//          << "Leader Elements: ";
//     for (int i = 0; i < size; i++)
//     {
//         if (check_elements(arr, size, i) || i == (size - 1))
//         {
//             cout << arr[i] << "\t";
//         }
//     }
//     return 0;
// }