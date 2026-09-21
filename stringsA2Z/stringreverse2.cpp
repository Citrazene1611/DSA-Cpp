#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
int main()
{ 
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    int n=str.length();
    char arr[n];
    for(int i=0;i<n;i++)
    {
      arr[i]=str[i];
    }
    while(n--)
    {
        cout<<arr[n];
    }
    return 0;
}