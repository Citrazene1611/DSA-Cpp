#include<iostream>
#include<map>
using namespace std;
int main()
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