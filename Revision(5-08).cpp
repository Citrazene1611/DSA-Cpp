#include <iostream>
#include <string>
using namespace std;
int k()
{
 string str;
 int K,L;
 cout<<"Enter a sentence"<<endl;
 getline(cin,str);
 cout<<"Your input"<<"   "<<str<<endl;
 K=str.find("anuj");
 L=str.rfind("anuj");
 cout<<"Object in starting at"<<K<<endl;
 cout<<"Object in the end at"<<L;
 return 0;
}
int L ()
{
    string str1="Hello world";
    string str2="Hello";
    string str3="world";
    //compare
    cout<<str1.compare(str2)<<endl;
    cout<<str2.compare(str1)<<endl;
    cout<<str1.compare(str3)<<endl;
    cout<<str3.compare(str1)<<endl;
    cout<<str2.compare(str3)<<endl;
    cout<<str3.compare(str2)<<endl;
    cout<<str3.compare(str3);
 return 0;
}
// Functions
void sum(int a , int b)
{
 int c;
 c = a+b;
 cout<<c;
 return ;
}
int main ()
{
    int x,y;
    cout<<"Enter number:"<<endl;
    cin>>x;
    cout<<"Enter number:"<<endl;
    cin>>y;
    sum(x,y);
    return 0;
}
