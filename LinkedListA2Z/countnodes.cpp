#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
struct node
{
public:
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
node *convertarrtoll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp; // mover->temp
    }
    return head;
}
int main()
{
    vector<int> j = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    node *head = convertarrtoll(j);
    node *t = head;
    int cnt = 0;
    while (t != NULL)
    {
        cnt++;
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl
         << "Length of linked list is:" << cnt;
    return 0;
}