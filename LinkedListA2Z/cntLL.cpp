#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
struct node
{
   public:
   node* next=nullptr;
   int data;

   public:
   node(int val,node*next1)
   {
    next=next1;
    data=val;
   }

};
node *convert2LL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int k = 1; k < arr.size(); k++)
    {
        node *temp = new node(arr[k], nullptr);
        tet
    }

    return head;
}
int main()
{
    vector<int>k={1,2,3,4,45,16,11,12,41,321,22,129};
    node*k=convert2LL
    return 0;
}