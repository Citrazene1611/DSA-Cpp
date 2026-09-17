#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int q2()
{
    string k;
    cin>>k;
    //precomputation
    int hash[123]={0};//for alphabets
    for(int i=0;i<k.size();i++)
    {
        hash[k[i]]+=1;
    }
    int n=k.size();
    while(n--)//to run loop exact n times
    {
        char alph;
        cout<<"Enter the character to find";
        cin>>alph;
        //fetch
        cout<<hash[alph]<<endl;
    }

    return 0;
}
int q1()
{
    int n;
    cout<<"Enter number of elements";
    cin>>n;
    int alpha[n];
    for(int i=0;i<n;i++)
    {
      cout<<"Enter the number";
      cin>>alpha[i];
    }
    //precomputation
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {

        hash[alpha[i]]+=1;
    }
    //fetch
    while(n--)//to run loop exact n times
    {
        int num;
        cout<<"Enter the number to find";
        cin>>num;
        //fetch
        cout<<hash[num]<<endl;
    }

    return 0;
}
// using mapping function
int main1()
{
    int n;
    cin >>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
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
    cin>>k;
    while(k--)
    {
        int z;
        cout<<"Enter the number to find";
        cin>>z;
        //fetch
        cout<<mpp[z]<<endl;
    }

    return 0;
}
int main()
{
    int n;
    cin >>n;
    char alpha[n];
    for(int i=0;i<n;i++)
    {
        cin>>alpha[i];
    }
//pre computing
    map<char,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[alpha[i]]++;
    }
//fetching
    int k;
    cin>>k;
    while(k--)
    {
        char z;
        cout<<"Enter the char to find";
        cin>>z;
        //fetch
        cout<<mpp[z]<<endl;
    }

    return 0;
}
