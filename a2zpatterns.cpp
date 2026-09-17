#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;
int q01 ()
{
     int i=0,j=0,n;
    char k='*';
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
      do
 {
     j=0;
     do
     {
         cout<<k;
         j++;
     }
     while(j<n);
     i++;
     cout<<endl;
      }
 while(i<n);
 return 0;
}
int q02()
{
  int i=0,j=0,n;
    char k='*';
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
 for(i=0;i<n;i++)
 {
     for(j=0;j<(i+1);j++)
     {
         cout<<k;
     }
     cout<<endl;
 }
 return 0;
}
int q03()
{
    int n,k;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
 for(int i=0;i<n;i++)
 {
     for( int j=1;j<=(i+1);j++)
     {
         cout<<j;
     }
     cout<<endl;
 }
 return 0;
}
int q04()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
 for(int i=0;i<n;i++)
 {
     for( int j=1;j<=(i+1);j++)
     {
         cout<<i+1;
     }
     cout<<endl;
 }
 return 0;
}
int q05 ()
{

int i=0,j=0,n;
char k='*';
cout<<"Enter n:";
cin>>n;
cout<<"Pattern is"<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<(n-i);j++)
    {
        cout<<k;
    }
    cout<<endl;
}
 return 0;
}
int q06x()
{
int i=0,j=0,n,m;
cout<<"Enter n:";
cin>>n;
cout<<"Pattern is"<<endl;
for(i=0;i<n;i++)
{
    m=n;
    for(j=0;j<(n-i);j++)
    {
        m--;
        cout<<m+1;


    }
    cout<<endl;
}
return 0;
}
int q06()
{
int i=0,j=0,n;
cout<<"Enter n:";
cin>>n;
cout<<"Pattern is"<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<(n-i);j++)
    {

        cout<<j+1;


    }
    cout<<endl;
}
return 0;
}
int q07()
{
int n;
cout<<"Enter Number:"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
//print space
for(int j=0;j<(n-i-1);j++)
{
    cout<<" ";
}

// print star
for(int k=0;k<2*i+1;k++)
{
    char a='*';
    cout<<a;
}

//print space
for(int l=0;l<(n-i-1);l++)
{
     cout<<" ";
}
cout<<endl;
}
return 0;
}
int q08()
{
int n;
cout<<"Enter Number:"<<endl;
cin>>n;
for(int i=n;i>=0;i--)
{
//print space
for(int j=0;j<=(n-i-1);j++)
{
    cout<<" ";
}

// print star
for(int k=1;k<=2*i+1;k++)
{
    char a='*';
    cout<<a;
}

//print space
for(int l=0;l<=(n-i-1);l++)
{
     cout<<" ";
}
cout<<endl;
}
return 0;
}
int q09()
{
int n;
cout<<"Enter Number:"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
//print space
for(int j=-1;j<(n-i-1);j++)
{
    cout<<" ";
}

// print star
for(int k=0;k<2*i+1;k++)
{
    char a='*';
    cout<<a;
}

//print space
for(int l=0;l<(n-i-1);l++)
{
     cout<<" ";
}
cout<<endl;
}
// next half
for(int i=n-1;i>=0;i--)
{
//print space
for(int j=0;j<=(n-i-1);j++)
{
    cout<<" ";
}

// print star
for(int k=1;k<=2*i+1;k++)
{
    char a='*';
    cout<<a;
}

//print space
for(int l=0;l<=(n-i-1);l++)
{
     cout<<" ";
}
cout<<endl;
}
return 0;
}
int q10()
{
    int i=0,j=0,n;
char k='*';
cout<<"Enter n:";
cin>>n;
cout<<"Pattern is"<<endl;
for(i=n;i>0;i--)
{
    for(j=0;j<(n-i);j++)
    {
        cout<<k;
    }
    cout<<endl;
}
// next half
for(i=0;i<n;i++)
{
    for(j=0;j<(n-i);j++)
    {
        cout<<k;
    }
    cout<<endl;
}
 return 0;
}
int q12()
{
    int n,k;
    cout<<"Enter number:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<i;j++)
       {
           cout<<j+1;
       }
       for(int k=(2*n-2*i)-2;k>0;k--)
       {
           cout<<" ";
       }
       for(int j=i;j>0;j--)
       {
           cout<<j;
       }
       cout<<endl;
    }
    return 0;
}
int q13()
{
    int n,k=1;
    cout<<"Enter number";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {

           cout<<k<<" ";
           k++;

        }
        cout<<endl;
    }
    return 0;
}
int q11 ()
{
    int n,k;
    cout<<"Enter number:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0){k=1;}
        else{k=0;}
        for(int j=0;j<i;j++)
        {
          cout<<k<<" ";
          k=1-k;
        }
        cout<<endl;
    }
    return 0;
}
int q19()
{
int n;
cout<<"Enter Number:"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
//print star
for(int j=-1;j<(n-i-1);j++)
{
    cout<<'*';
}

// print space
for(int k=1;k<2*i+1;k++)
{

    cout<<" ";
}

//print star
for(int l=0;l<=(n-i-1);l++)
{
     cout<<'*';
}
cout<<endl;
}
// next half
for(int i=n-1;i>=0;i--)
{
//print star
for(int j=0;j<=(n-i-1);j++)
{
    cout<<'*';
}

//print space
for(int k=1;k<2*i+1;k++)
{

    cout<<" ";
}

//print star
for(int l=0;l<=(n-i-1);l++)
{
     cout<<'*';
}
cout<<endl;
}
return 0;
}
int q20()
{
 int n;
    cout<<"Enter number:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<i;j++)
       {
           cout<<'*';
       }
       for(int k=(2*n-2*i);k>0;k--)
       {
           cout<<" ";
       }
       for(int j=i;j>0;j--)
       {
           cout<<'*';
       }
       cout<<endl;
    }
    // next half
    for(int i=n;i>0;i--)
    {
       for(int j=0;j<i;j++)
       {
           cout<<'*';
       }
       for(int k=(2*n-2*i);k>0;k--)
       {
           cout<<" ";
       }
       for(int j=i;j>0;j--)
       {
           cout<<'*';
       }
       cout<<endl;
    }
    return 0;
}
int q14x()
{
// we will use ASCII over here and the argument of for loop will be a character
    int n;
    char k='A';
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
 for(int i=0;i<n;i++)
 {
     for( int j=1;j<=(i+1);j++)
     {
         cout<<k;
         k++;
     }
     cout<<endl;
 }
 return 0;
}
int q14()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
 for(int i=0;i<n;i++)
 {
     for(char j='A';j<=(i+'A');j++)
     {
         cout<<j;
     }
     cout<<endl;
 }
 return 0;
}
int q15()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
 for(int i=n;i>0;i--)
 {
     for(char j='A';j<(i+'A');j++)
     {
         cout<<j;
     }
     cout<<endl;
 }
 return 0;
}
int q16()
{
    int n;
    char z='A',k;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern is"<<endl;
    n++;
 for(int i=0;i<n;i++)
 {
     k=z+i-1;
     for(int j=0;j<i;j++)
     {
         cout<<k<<" ";
     }
     cout<<endl;
 }
 return 0;
}
int q17()
{
  int n;
cout<<"Enter Number:"<<endl;
cin>>n;

for(int i=0;i<n;i++)
{
//print space
for(int j=0;j<(n-i-1);j++)
{
    cout<<" ";
}

// print alphabet
char a='A';
int breakpoint = (2*i+1)/2;
for(char k=0;k<2*i+1;k++)
{
    cout<<a;
    if(k<breakpoint)      // rule tp remember
    {
        a++;
    }
    else
    {
        a--;
    }
}

//print space
for(int l=0;l<(n-i-1);l++)
{
     cout<<" ";
}
cout<<endl;
}
return 0;
}
int q18()
{

int i=0,j=0,n;
cout<<"Enter n:";
cin>>n;
cout<<"Pattern is"<<endl;

for(i=n;i>=0;i--)
{
    char z='A'+i;
    for(j=0;j<(n-i);j++)
    {

        cout<<z;
        z++;
    }

    cout<<endl;
}
 return 0;
}
int q21()
{
  int i,j;
  for(i=0;i<=4;i++)
  {
    if(i==0||i==4)
    {
        int a=0;
        do
        {
            cout<<'*';
            a++;

        }
        while(a<4);
        cout<<endl;
    }
    else
    {
        cout<<"*  *"<<endl;
    }
  }
  return 0;
}
int q22()
{
 int n,i,j;
 cout<<"Enter number"<<endl;
 cin>>n;
 for(i=0;i<2*n-1;i++)
 {
     for(j=0;j<2*n-1;j++)
     {
      int top = i;
      int left =j;
      int right = 2*n-2-j;
      int bottom = 2*n-2-i;
      cout<<n-min(min(top,bottom),min(right,left));
     }
     cout<<endl;
 }
 return 0;
}
int qx1()
{
    int a,n,u,j;
    a=79;
    u=0;
    do
    {
         n=(a%10);
         j=a/10;
         u=u+n;
         a=j;
    }
    while(j>0);
    cout<<u;
    return 0;
}
//Array Sorting techniques
int bubbleSort()
{
    int n,i,j,a[100];
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number:"<<endl;
        cin>>a[i];
    }
    bool isSwap = false;
    for(i=0;i<n-1;i++)
       {
           for(j=0;j<n-i-1;j++)
           {
               if(a[j]>a[j+1])
               {
                   swap(a[j],a[j+1]); //O(n^2)  : O(nlogn)
                   isSwap=true;
               }
           }
        if(!isSwap)        //Saves time during already sorted data
        {
           for(i=0;i<n;i++)
       {
           cout<<a[i]<<" ";
       }
          return 0;
        }
       }

       for(i=0;i<n;i++)
       {
           cout<<a[i]<<" ";
       }
    return 0;
 }
int selectionSort()
{
    int n,i,j,a[100];
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number:"<<endl;
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
       {
           int smallestindex = i;
           for(j=i+1;j<n;j++)  //Assumed ith element to be minimum
           {
               if(a[j]<a[smallestindex])
               {
                   smallestindex=j;
                                      //O(n^2)  : O(nlogn)
               }
            swap(a[i],a[smallestindex]);
           }
         }
       for(i=0;i<n;i++)
       {
           cout<<a[i]<<" ";
       }
    return 0;
 }
int insertionSort()
{

    int n,i,j,a[100];
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number:"<<endl;
        cin>>a[i];
    }
 for(int i=0;i<n;i++)
 {
     int current=a[i];
     int previous = i-1;
     while(previous>=0 && a[previous]>current)
     {
         a[previous+1]=a[previous];
         previous--;
     }
     a[previous+1]=current;
 }
  for(i=n-1;i>=0;i--)
       {
           cout<<a[i]<<" ";
       }
 return 0;
}
int main()
{
    insertionSort();
    return 0;
}
