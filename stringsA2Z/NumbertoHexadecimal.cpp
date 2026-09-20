#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";   
    cin>>n;
    while(n>0)
    {
        int rem=n%16;
        if(rem<10)
        {
            cout<<rem;
        }
        else
        {
            char hexChar='A'+(rem-10);
            cout<<hexChar;
        }
        n/=16;
    }
    return 0;
}