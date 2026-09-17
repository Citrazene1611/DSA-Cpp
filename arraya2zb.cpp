#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
#include<bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std ;
int q21()
{
    int prices[6] = {7,1,5,3,6,4};
    int n = 6;

    int minPrice = prices[0];
    int maxProfit = 0;
    int buyDay = 0, sellDay = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
            sellDay = i;
        }
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
            buyDay = i;
        }
    }

    cout << "Profit = " << maxProfit << endl;
    cout << "Buy on day " << buyDay << " (price = " << prices[buyDay] << ") and sell on day "
         << sellDay << " (price = " << prices[sellDay] << "), profit = "
         << prices[sellDay] << "-" << prices[buyDay] << " = " << maxProfit << endl;

    return 0;
}
int q22()
{
    int arr[5]={1,2,-4,-5,0};
    int pos=0,neg,k[5],n=5;
    neg=pos+1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            k[pos]=arr[i];
            pos+=2;
        }
        else
        {
            k[neg]=arr[i];
            neg+=2;
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<k[j]<<endl;
    }
    return 0;
}
int q23 ()
{
    string arr={1,2,3};
    string k;
    cin>>k;
    for(int i=0;i<3;i++)
    {
     //incomplete
    }
}
int q24()
{
    int k[10];
    int b[10];
    int n,maxi,z=1;
    cout<<"Enter size"<<endl;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cout<<"Enter Element:"<<endl;
        cin>>k[j];
    }
    maxi=k[n-1];
    b[0]=maxi;
    for(int j=n-2;j>0;j--)
    {
     if(k[j]>maxi)
     {
         b[z]=k[j];
         maxi=k[j];
         z++;
     }
     else
     {
         continue;
     }
    }
    while(z--)
    {
        cout<<b[z]<<endl;
    }
    return 0;
}
/*int q25()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> current;
    vector<bool> used(arr.size(), false);

    sort(arr.begin(), arr.end());

    function<void()> generate = [&]() {
        if (current.size() == arr.size()) {
            ans.push_back(current);
            return;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (!used[i]) {
                current.push_back(arr[i]);
                used[i] = true;
                generate();
                current.pop_back();
                used[i] = false;
            }
        }
    };

    generate();
    int n=3;
    vector <vector<int>> fin;
    for(int i=0;i<n;i++)
    {
     cin>>fin[0][i];
    }
    cout<<next_permutation(fin.begin(),fin.end())<<endl;
    return 0;
}*/
int q26()
{
    int arr[10]={0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int n=size(arr);
    for(int i = 0; i < n-1; i++)
{
    for(int j = 0; j < n-i-1; j++)
    {
        if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
    }
}
int next=arr[0],c=0,lon=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]-1==next)
        {
            c++;
            next=arr[i];
        }
        else if(next==arr[i])
        {
            continue;
        }
        else if(arr[i]>next)
        {
            next=arr[i];
            c=1;
        }
        long=max(c,long);
    }
    cout<<c;
    return 0;
}
int main()
{
    q26();
    return 0;
}
