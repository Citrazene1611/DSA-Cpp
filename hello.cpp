#include <iostream>
using namespace std;

int main1() {
    cout << "Hello World!" << endl;
    return 0;
}
int main ()
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
