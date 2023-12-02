// A number of visitors at a park is given for N consecutive days. A day is "record breaking" 
// if it satisfies both of the following conditions:

//  1. The number of visitors on the day is strictly larger than the number of visitors 
//  on each of the previous days.
//  2. Either it is the last day, or the number of visitors on the day is strictly larger
//  than the number of visitors on the following day.

// Note that the very first day could be a record breaking day.

// Find the number of record breaking days.


//    5   7   9   6   3   2
//    0   1   2   3   4   5


//    9    6    8   3   11  2   17  9
//    0    1    2   3   4   5   6   7
//    r                 r       r    

// For loop lagao 0 se n tak phir yeh saare conditions check karo
// Pehla din && following day se bada                                   r++
// Last din && pichle saare dino ke maximum se bada                     r++ 
// pichle saare dino ke maximum se bada && following day se bada        r++

// Previous saare elements ka max nikaal ke update karne mein confusion ho raha hai
//Mai atak gayi

// r=0, i=1;
// if(a[0]>a[1])---> r++, i=2;

#include <iostream>
using namespace std;

int record_breaking(int a[],int n)
{
    int r=0, pmax=a[0];
    for(int i=0; i<n; i++)
    {
        if(i==0 && a[0]>a[1])
        {
            r++;
           // pmax=a[0];
        }
        else if(a[i]>pmax && a[i]>a[i+1])
        {
            r++;
            pmax=a[i];
        }
         else if(i==n-1 && a[i]>pmax)
        {
            r++;
        }
        // else
        // {
        //     cout<<a[i]<<" is not a record breaking day";
        // }
    }
    return r;
}

int main()
{
   cout << "Enter the no of days: ";
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"The no of record breaking days are "<<record_breaking(a,n);
return 0;
}