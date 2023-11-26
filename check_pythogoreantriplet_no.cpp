#include<iostream>
using namespace std;

int main()
{
int a, b, c ;
cin>>a>>b>>c;

if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
{
    cout<<"They are Pythogorean triplets";
}
else
{
   cout<<"They are not Pythogorean triplets";
   return 0;
}
}