#include <iostream>
using namespace std;

void create_array(int arr[], int n)
{
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print_entered_array(int arr[], int n)
{
    cout << "Entered array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void print_sorted_array(int arr[], int n)
{
    cout << endl
         << "Sorted Array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}

