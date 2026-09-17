#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
#include<bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std ;
int main()
{
    int target;
    cin>>target;
    vector <int> num={12,13,18,19,20,21,22}; // sorted array only
    int high=size(num);
    int low=0;
    for(int i=0;i<size(num);i++)
    {
    int mid=high+low/2;
    if(target>num[mid])
    {
        low=mid+1;
    }
    else if(target<num[mid])
    {
        high=mid-1;
    }
    else if(target==num[mid])
    {
        cout<<mid;
    }
    }
    return 0;
}
