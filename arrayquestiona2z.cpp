#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
#include<bits/stdc++.h>
#include <unordered_map>
#include <map>

using namespace std;
int q1()
{
  int a[4]={3, 3, 6, 1},i,j;
  int n=4;
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
    cout<<a[n-1]<<endl;

  return 0;
}
int q2()
{
  int a[4]={3, 3, 6, 1},i,j;
  int n=4;
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
    cout<<a[n-2]<<endl;

  return 0;
}
int q3 ()
{
    int num[100]={1,23,23,23,23,45,45,45,45,67,67,67,67,87,87,87,87,90,90,90,90},num1[100];
    int i=0,j;
    for(j=1;j<=21;j++)
    {
        if(num[j]!=num[i])
        {
            i++;
            num[i]=num[j];
        }
        else {continue ; }
    }
    for(j=0;j<i+1;j++)
    {
       cout<<num[j]<<endl;
    }
    return 0;
}
int q4()
{
    int num[100]={1,23,23,23,23,45,45,45,45,67,67,67,67,87,87,87,87,90,90,90,90},num1[100];
    int i=0,j;
    for(j=1;j<=21;j++)
    {
        if(num[j]!=num[i])
        {
            i++;
            num[i]=num[j];
        }
        else {continue ; }
    }
     cout<<"Array is {";
    for(j=0;j<i;j++)
    {
       cout<<num[j];
       cout<<",";
    }
    cout<<"}";
    return 0;
}
int q5 ()
{
    int k[8]={12,22,23,24,225,877,901,922};
    int s[8];
    int j=0;
    for(int i=1;i<8;i++)
    {
      s[j]=k[i];
      j++;
    }
    s[7]=k[0];
    for(j=0;j<8;j++) cout<<s[j]<<endl;
    return 0 ;
}
int q6()
{
    int k[8]={12,22,23,24,225,877,901,922};
    int s[8];
    int j=0,n;
    cout<<"Enter number of places to mutate:"<<endl;
    cin>>n;
    for(int i=n;i<8;i++)
    {
      s[j]=k[i];
      j++;
    }
    int i=0;
    j=8-n;
    do
    {
        do
        {
         s[j]=k[i];
         j++;
         i++;
        }
        while(j<8);
    }
    while(i<n);
    cout<<"Output is:"<<endl;
    for(j=0;j<8;j++) cout<<s[j]<<endl;
    return 0 ;
}
int q7()
{
     vector <int> num={21,0,23,51,56,0,12,41,32,0,87,98,99};
     int alpha[13];
    int k=13,j=0;
    for(int i=0;i<13;i++)
    {
        if(num[i]==0)
        {
            k--;
            alpha[k]=num[i];
        }
        else

         {
            alpha[j]=num[i];
            j++;
         }
    }
    cout<<"Output is:"<<endl;
    for(j=0;j<13;j++) cout<<alpha[j]<<endl;
    return 0;
}
int q8()
{
    int num[13]={21,0,23,51,56,0,12,41,32,0,87,98,99};
    int k=99;
    for(int i=0;i<13;i++)
    {
        if(num[i]==k)
        {
            cout<<k<<" is at "<<i<<"th index."<<endl;
        }
        else{continue;}
    }
    return 0;
}
int q9()
{
    int a[4]={1,3,5,9};
    int num[7]={21,23,51,56,87,98,99};
    int k[11];
    int n=0;
    do
    {
        k[n]=a[n];
        n++;
    }
    while(n<4);
    int l=4;
    do
    {
        for(int i=0;i<7;i++)
        {
            k[l]=num[i];
            l++;
        }
    }
    while(l<11);
    for (int j=0;j<11;j++)
    {
        cout<<k[j]<<endl;
    }
    return 0;
}
int q10()
{
    int k[20]={0,1,1,1,1,0,0,1,1,1,0,1,1,0,1,1,0,1};
    int cnt=0,maxi=0;
    for(int i=0;i<18;i++)
    {
        if(k[i]==0)
        {
            cnt=0;
        }
        if(k[i]==1)
        {
            cnt++;
        }
        maxi=max(cnt,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
int q11()
{

    int n;
    cout<<"Enter number of elements"<<endl;
    cin >>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<":"<<endl;
        cin>>num[i];
    }
//pre computing
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[num[i]]++;
    }
//fetching
    int k;
    cout<<"Enter number of searches:"<<endl;
    cin>>k;
    while(k--)
    {
        int z;
        cout<<"Enter the number to find:"<<endl;
        cin>>z;
        //fetch
        cout<<z<<" occurs "<<mpp[z]<<" times."<<endl;
    }

    return 0;

}
int q12()
{
    // array Declaration
    int arr[22]={12,11,13,14,15,21,14,13,12,11,56,91,98,2,4,3,5,6,78,6,5,8};
    vector <int> prefixsum(22,0);
    prefixsum[0]=arr[0];
    int n=22;
    int count =0,k;
    cout<<"Enter sum"<<endl;
    cin>>k;
    for(int i=1;i<n;i++)
    {
        prefixsum[i]=prefixsum[i-1]+arr[i];
    }
    unordered_map<int,int> mpp;
    mpp[0]=0;
    for(int j=0;j<n;j++)
    {
        if(prefixsum[j]==k)
        {
            count++;
        }
        int val= prefixsum[j]-k;
        if (mpp.find(val)!=mpp.end())
        {
            count += mpp[val];
        }
        if(mpp.find(prefixsum[j])==mpp.end())
        {
            mpp[prefixsum[j]]=0;
        }
        mpp[prefixsum[j]]++;
    }
    cout << "Number of subarrays with sum " << k << " = " << count << endl;
    return 0;
}
int q12a()
{
    string num={12,11,13,14,15,21,14,13,12,11,56,91,98,2,4,3,5,6,78,6,5,8};
    int n= num.size();
    int maxlen=0;
    int l=0,r=0;
    int sum=num[0];
    int k;
    cout<<"Enter sum:"<<endl;
    cin>>k;
    while(r<n)
    {
        while(l<=r && sum>k)
        {
            sum-=num[l];
            l++;
        }
        if(sum==k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
        if(r<n)
        {
            sum+=num[r];
        }
    }
    cout<<"The longest array is "<<maxlen<<" elements long"<<endl;
    return 0;
}
int q13()
{
    string num={2,6,5,8,11};
    int n= num.size();
    int maxlen=0;
    int l=0,k,r=n-1,sum=0;
    cout<<"Enter sum"<<endl;
    cin>>k;
    while(r>0)
    {
        while(l<n)
        {
            sum=num[r]+num[l];
            if(sum>k)
            {
                r--;
            }
            else if(sum<k)
            {
                l++;
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"=> NO"<<endl;

    return 0;
}
int q14()
{
 int n;
 cout<<"Enter number of elements:"<<endl;
 cin>>n;
 vector<int> arr(n,0);
 for(int k=0;k<n;k++)
 {
     cout<<"Enter Element arr["<<k+1<<"]:"<<endl;
     cin>>arr[k];
 }
 int c1=0, c2=0, c3=0;
 for(int i=0;i<n;i++)
 {
     if(arr[i]==0)
     {
         c1++;
     }
     else if(arr[i]==1)
     {
         c2++;
     }
     else if(arr[i]==2)
     {
         c3++;
     }
     else
     {
         cout<<arr[i]<<"Input Invalid:"<<endl;
     }
 }
 for(int j=0;j<c1;j++)
 {
     arr[j]=0;
 }
 for(int j=c1;j<c1+c2;j++)
 {
     arr[j]=1;
 }
 for(int j=c1+c2;j<c1+c2+c3;j++)
 {
     arr[j]=2;
 }
 for(int k=0;k<n;k++)
 {
     cout<<"arr["<<k+1<<"]="<<arr[k]<<endl;
 }
 return 0;
}
int q15()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin >>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element:"<<endl;
        cin>>num[i];
    }
    int k = n/2;
    int maxcount=0;
    int b;
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[num[i]]++;
        if(mpp[num[i]]>maxcount)
        {
            maxcount=mpp[num[i]];
            b=num[i];
        }
        else
        {
            continue;
        }

    }
    if(k<maxcount)
    {
        cout<<"Most frequent element is:"<<b<<endl;
    }
    else
    {
        cout<<"NO ELEMENT OCCURS MORE THAN N/2 TIMES IN THE ARRAY"<<endl;
    }
    return 0;
}
int q16()
{
  int n;
    cout<<"Enter the size of array"<<endl;
    cin >>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element:"<<endl;
        cin>>num[i];
    }
    int sum=0;
    int maxsum=0;
    int b;

    for(int i=0;i<n;i++)
    {
        sum+=num[i];
        if(sum>maxsum)
        {
            maxsum=sum;
            b=i;
        }
        else if (sum<=0)
        {
            sum=0;
        }
    }
    cout<<maxsum<<endl;
    for(int i=0;i<b;i++)
    {
    cout<<num[i]<<" ";
    }
    return 0;
}
int q17()
{
    int prices[6]= {7,1,5,3,6,4};
    int n=6;
    int minprice=0,maxprice=0;
    int a,b,j=0;
    //purchase
    for (int i=0;i<n-1;i++)
    {
        if(prices[i]>=prices[i+1])
        {
            minprice=prices[i+1];
            a=i;
        }
        else
        {
            continue;
        }
        j=i;
          do
            {
            if(prices[j]<=prices[j+1])
            {
                maxprice=prices[j+1];
                b=j;
            }
            else
            {
                continue;
            }
            j++;

        }
           while(j<n);
    }
    cout<<"Profit= "<<maxprice-minprice<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"Buy on day "<<a<<" (price = "<<minprice<<") and sell on day "<<b<<" (price = "<<maxprice<<"), profit = "<<maxprice<<"-"<<minprice<<" = "<<maxprice-minprice;
    return 0;
}
int main ()
{

    q17();
    return 0;
}
