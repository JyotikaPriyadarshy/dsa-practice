// Insert an element from unsorted array to its correct position in sorted array
//          i=1 (temp=4)
//      5   4   1   2   3
//      4   5   1   2   3
//          i=2 (temp=1)
//      4   5   5   2   3
//      4   4   5   2   3
//      1   4   5   2   3
//          i=3
//      1   2   4   5   3
//          i=4 (temp=3)
//      1   2   4   5   5
//      1   2   4   4   5
//      1   2   3   4   5

#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{
	int i, temp, j;
	for (i = 1; i < n; i++)
    {
		temp = a[i];
		
		for( j=i-1; j >= 0 && a[j]>temp; j--) 
        {
			a[j + 1] = a[j];
		}
		a[j + 1] = temp;
	}
}

void printArray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}


int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
	insertionSort(a, n);
	printArray(a, n);

	return 0;
}

