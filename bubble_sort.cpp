//       3    5    1    2         
//       3    1    5    2
//       3    1    2    5

//       1    3    2    5
//       1    2    3    5

//Scan the array from left side
//Compare adjacent elements if first>second or not
//If greater, swap


#include <iostream>
using namespace std;

int main()
{
   int n,i,j,temp;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<n-1;i++)
   {
        for(int j=0;j<n-i-1;j++)     //j<n-(i+1)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
   }
   cout<<"After sorting the array is:"<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<a[i];
   }
return 0;
}

// #include <iostream>
// #include "array_operations.h"
// using namespace std;

// void bubble_sort(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool is_swapped = false;
//         for (int j = 0; j < n - (i + 1); j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 is_swapped = true;
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//         if (!is_swapped)
//             break;
//     }
// }

// int main()
// {
//     cout << "No of Elements: ";
//     int n;
//     cin >> n;
//     int arr[n];

//     create_array(arr, n);

//     print_entered_array(arr, n);

//     bubble_sort(arr, n);

//     print_sorted_array(arr, n);
    
//     return 0;
// }
