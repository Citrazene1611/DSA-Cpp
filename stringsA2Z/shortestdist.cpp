#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int find(string str[],int len,string word1,string word2)
{
    int cnt=0,ind,ind1,dist=len,mindist=len;
    for(int i=0;i<len;i++)
    {
          if(word1==str[i])
          {
            for(int j=0;j<len;j++)
            {
              if(word2==str[j])
              {
                cout<<abs(i-j)<<endl;
                dist=abs(i-j);
                mindist=min(dist,mindist);
              }  
              else
              {
                continue;
              }   
                   
            }
          }
          else
          {
            continue;
          }
    }
    cout<<"Hence Minimum Distance is"<<mindist<<endl;
    return 0;
}
int main()
{

    string str[]={"hello", "world", "this", "is", "an", "example", "world", "hello"};
    
    string word1;
    string word2;
    cout<<"Enter the first word: ";
    cin>>word1;
    cout<<"Enter the second word: ";
    cin>>word2;
    find(str,8,word1,word2);
    return 0;
}