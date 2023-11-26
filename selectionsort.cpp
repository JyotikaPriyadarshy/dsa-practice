//select the smallest element from an unsorted list in each iteration
//place that element at the beginning of the unsorted list 

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
        for(int j=i+1;j<n;j++)     
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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
