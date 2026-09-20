#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int n=str.length(),k=0;
    char arr[n];
    for(int i=n-1;i>=0;i--)
    {
        arr[k]=str[i];
        k++;
    }
    cout<<"Reversed string is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}