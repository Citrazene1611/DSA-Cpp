#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;
int main ()
{
    int i=0,j=0,n;
    char k='*';
    cout<<"Enter n:";
    cin>>n;
    char Matrix[n][n];
   do
   {
    j=0;
   do
   {
    Matrix[i][j]=k;
    j++;
   }
   while(j<n);
    i++;
 }
 while(i<n);
cout<<"Pattern is"<<endl;
 i=0;
 j=0;
      do
 {
     j=0;
     do
     {
         cout<<Matrix[i][j];
         j++;
     }
     while(j<n);
     i++;
     cout<<endl;
      }
 while(i<n);
 return 0;
}