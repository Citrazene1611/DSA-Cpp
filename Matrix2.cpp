#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;
int main ()
{
 int i,j,n,m,a=0,b=0;
 cout<<"Enter Number of Columns"<<endl;
 cin>>n;
 cout<<"Enter Number of Rows"<<endl;
 cin>>m;
 int Matrix[n][m];
 for(i=1;i<=n;i++)
 {
   for (j=1;j<=m;j++)
   {
     cout<<"Enter Element Matrix["<<i<<"]["<<j<<"]"<<endl;
     cin>>Matrix[i][j];
   }
 }
 cout<<endl;
 cout<<"!!!!  Entry   done  !!!!"<<endl;
 cout<<endl;
 return 0;
}
